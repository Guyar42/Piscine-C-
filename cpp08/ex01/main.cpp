/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:57:39 by guyar             #+#    #+#             */
/*   Updated: 2023/06/19 16:19:36 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{

    // int tab[] = {10, 12, 14, 15, 22};
    Span sp(10000);
    try {
        // sp.addNumber(0);
        // sp.addNumber(3);
        // sp.addNumber(20);
        // int tab[] = {10, 12, 14};
        // sp.addMultiple(tab);
        sp.addRandom(10000);
        std::cout <<"the longest span is " << sp.longestSpan() << std::endl;
        std::cout <<"the shortest span is " << sp.shortestSpan() << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
}