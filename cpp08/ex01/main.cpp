/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:57:39 by guyar             #+#    #+#             */
/*   Updated: 2023/06/15 19:11:41 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
    Span sp(3);
    try {
        sp.addNumber(0);
        std::cout << "add 1" << std::endl;
        sp.addNumber(1);
        std::cout << "add 1" << std::endl;
        std::cout <<"the longest span is " << sp.longestSpan() << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
}