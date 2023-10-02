/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:57:39 by guyar             #+#    #+#             */
/*   Updated: 2023/10/02 19:31:53 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{

    // int tab[] = {10, 12, 14, 15, 22};
    Span sp(10000);
    try {
        sp.addNumber(0);
        sp.addNumber(3);
        sp.addNumber(20);
        sp.addRandom(10);
        std::cout <<"the longest span is " << sp.longestSpan() << std::endl;
        std::cout <<"the shortest span is " << sp.shortestSpan() << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
    
}