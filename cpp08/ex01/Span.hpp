/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:41:19 by guyar             #+#    #+#             */
/*   Updated: 2023/09/06 17:42:20 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
#include <set>
#include <vector>
#include <cstdarg>
#include<cstdlib>

class Span {
    public:
        ~Span();
        Span(int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        void addNumber(int n);
        int shortestSpan() const;
        int longestSpan() const;
        void addMultiple(int *tab);
        void addRandom(int n);
        class TooMuchDataException: public std::exception {
            virtual const char * what() const throw();
        };
        class NotEnoughDataException: public std::exception {
            virtual const char * what() const throw();
        };
    private:
        Span();
        std::set<int> _data;
        int _n;
        int _nb;
};
