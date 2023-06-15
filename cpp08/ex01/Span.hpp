/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:41:19 by guyar             #+#    #+#             */
/*   Updated: 2023/06/15 19:01:35 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
#include <set>

class Span {
    public:
        ~Span();
        Span(int n);
        void addNumber(int n);
        // int ShortestSpan();
        int longestSpan() const;

        class TooMuchDataException: public std::exception {
            virtual const char * what() const throw();
        };

    private:
        Span();
        std::set<int> _data;
        int _n;
        int _nb;
};