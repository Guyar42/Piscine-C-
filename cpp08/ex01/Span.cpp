/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:43:53 by guyar             #+#    #+#             */
/*   Updated: 2023/06/16 18:49:42 by guyar            ###   ########.fr       */
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

Span::Span(int n): _n(n), _nb(0)
{
    std::cout << "constructor called for Span" << std::endl;
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

void Span::addMultiple(int * tab)
{
    int i;
    i = 0;

    while(tab[i])
    {
        addNumber(tab[i]);
        i++;
    }
}