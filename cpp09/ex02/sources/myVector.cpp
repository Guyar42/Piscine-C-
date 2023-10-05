#include "../includes/myVector.hpp"

MyVector::MyVector () {}

MyVector::~MyVector () {}

void MyVector::putInVector(int n)
{
    if (std::find(_data.begin(), _data.end(), n) != _data.end())
        throw argError();
    _data.push_back(n);
}

void MyVector::insertionSort(std::vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to merge two sorted halves of a vector
void MyVector::merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Function to perform merge-insertion sort
void MyVector::mergeInsertionSort(std::vector<int>& arr, int left, int right, int threshold) {
    if (left < right)
    {
        if (right - left <= threshold)
        {
            // Use insertion sort for small subarrays
            insertionSort(arr, left, right);
        } 
        else
        {
            int mid = left + (right - left) / 2;
            mergeInsertionSort(arr, left, mid, threshold);
            mergeInsertionSort(arr, mid + 1, right, threshold);
            merge(arr, left, mid, right);
        }
    }
}

void MyVector::sort()
{
    clock_t start1 = clock();
    mergeInsertionSort(_data, START, _data.size() - 1, THRESHOLD);
    clock_t end1 = clock();
    double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;
    display();
    std::cout << "Time to process a range of " << _data.size() 
            << " elements with std::vector container: " 
            << time1 << " us" << std::endl;
}

void MyVector::display()
{
    unsigned i = 0;

    std::cout << "After: ";
    for (unsigned i = 0;  i < _data.size(); i++)
    {
        std::cout << _data[i];
        if (_data[i+1])
        std::cout << " ";
    }
    std::cout << std::endl;
}
