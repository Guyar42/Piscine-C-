/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:43:53 by guyar             #+#    #+#             */
/*   Updated: 2023/10/02 19:49:16 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <iostream>

Span::Span()
{
    std::cout << "Default constructor called for Span" << std::endl;
}

Span::~Span()
{
    std::cout << "Default destructor called for Span" << std::endl;
}

Span::Span(unsigned int N): _n(N), _nb(0)
{
    std::cout << "constructor called for Span" << std::endl;
}


Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _n = other._n;
        _nb = other._nb;
        _data = other._data;
    }
    return *this;
}
Span::Span(const Span &other) : _data(other._data),
                                _n(other._n),
                                _nb(other._nb)
{
    std::cout << "Copie constructor called for Span" << std::endl;
}

void Span::addNumber(int n)
{
    if (this->_nb < this->_n)
    {
        this->_data.insert(n);
        std::cout << "added in the tab = " << n << std::endl;
        this->_nb++;
    }
    else
        throw TooMuchDataException(); 
}

const char *Span::TooMuchDataException::what() const throw()
{
    return "Too much data in the tab";
}

const char *Span::NotEnoughDataException::what() const throw()
{
    return "No enough data in the tab";
}

int Span::longestSpan() const
{
    if (this->_nb < 2) 
    {
        throw NotEnoughDataException();
    }
    std::set<int>::iterator it = this->_data.begin();
    std::set<int>::iterator end = this->_data.end();
    end--;
    return (-(*it - *end));
}

int Span::shortestSpan() const
{
    if (this->_nb < 2) 
    {
        throw NotEnoughDataException();
    }

    std::set<int>::iterator it = this->_data.begin();
    std::set<int>::iterator itplus = this->_data.begin();
    itplus++;
    int gap;
    for(gap = (*itplus - *it); itplus != this->_data.end(); itplus++, it++)
    {
        if (gap > (*itplus - *it))
        {
            gap = (*itplus - *it);
        }
    }
    return gap;
}

void Span::addRandom(int n)
{
    std::srand((unsigned) time(NULL));
    for (int i = 0; i < n; i++)
    {
        int tmp = rand() % 10000;
        addNumber(tmp);
    }
}