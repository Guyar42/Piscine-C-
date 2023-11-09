#pragma once

#include <deque>
#include <algorithm>
#include <iostream>
#include "../includes/error.hpp"

#define START 0
#define THRESHOLD 2

class MyDeque {
    public:
        MyDeque();
        MyDeque(const MyDeque& other);
        MyDeque& operator=(const MyDeque& other);
        ~MyDeque();
    
        void putInDeque(int n);
        void sort();
        void display();
   
    private:
        std::deque<int> _data;
        void mergeInsertionSort(std::deque<int>& arr, int left, int right, int threshold);
        void merge(std::deque<int>& arr, int left, int mid, int right);
        void insertionSort(std::deque<int>& arr, int left, int right);
};