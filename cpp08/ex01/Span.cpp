/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:43:53 by guyar             #+#    #+#             */
/*   Updated: 2023/06/15 19:07:33 by guyar            ###   ########.fr       */
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
        this->_nb++;
    }
    else
        throw TooMuchDataException(); 
}

const char *Span::TooMuchDataException::what() const throw()
{
    return "Too much data in the tab";
}

int Span::longestSpan() const
{
    std::set<int>::iterator it = this->_data.begin();
    std::set<int>::iterator end = this->_data.end();
    end--;
    std::cout <<"it = " << *it << std::endl;
    std::cout <<"end = "<<  *end << std::endl;
    return (-(*it - *end));
}