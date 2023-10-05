/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myVector.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:06:30 by guyar             #+#    #+#             */
/*   Updated: 2023/10/05 19:08:23 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include "../includes/error.hpp"
#include <iostream>

#define START 0
#define THRESHOLD 2


class MyVector {
    public:
        MyVector();
        ~MyVector();
    
        void putInVector(int n);
        void sort();
        void display();
        
    private:
        void mergeInsertionSort(std::vector<int>& arr, int left, int right, int threshold);
        void merge(std::vector<int>& arr, int left, int mid, int right);
        void insertionSort(std::vector<int>& arr, int left, int right);
        std::vector<int> _data;
};