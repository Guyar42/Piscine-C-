#include "../includes/myDeque.hpp"

MyDeque::MyDeque () {}

MyDeque::~MyDeque () {}

void MyDeque::putInDeque(int n)
{
    _data.push_back(n);
}

MyDeque::MyDeque(const MyDeque& other) {
    _data = other._data;
}

MyDeque& MyDeque::operator=(const MyDeque& other) {
    if (this != &other) {
        _data = other._data;
    }
    return *this;
}

void MyDeque::insertionSort(std::deque<int>& arr, int left, int right)
{
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
void MyDeque::merge(std::deque<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::deque<int> leftArr(n1);
    std::deque<int> rightArr(n2);

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
void MyDeque::mergeInsertionSort(std::deque<int>& arr, int left, int right, int threshold)
{
    if (left < right) {
        if (right - left <= threshold) {
            // Use insertion sort for small subarrays
            insertionSort(arr, left, right);
        } else {
            int mid = left + (right - left) / 2;
            mergeInsertionSort(arr, left, mid, threshold);
            mergeInsertionSort(arr, mid + 1, right, threshold);
            merge(arr, left, mid, right);
        }
    }
}

void MyDeque::sort()
{
    clock_t start2= clock();
    mergeInsertionSort(_data, START, _data.size() - 1, THRESHOLD);
    clock_t end2 = clock();
    double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _data.size() 
            << " elements with std::deque container: "
            << time2 << " s" << std::endl;
}

void MyDeque::display()
{
    std::cout << "After: ";
    for (unsigned i = 0; i < _data.size(); i++)
    {
        std::cout << _data[i];
        if (_data[i+1])
            std::cout << " ";
    }
    std::cout << std::endl;
}