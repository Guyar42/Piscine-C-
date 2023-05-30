/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:02:28 by guyar             #+#    #+#             */
/*   Updated: 2023/04/10 15:47:18 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fixed.hpp"

int main ( void )
{
    Fixed a;
    Fixed const b( Fixed( 2 ) + Fixed( 2) );
    Fixed c;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c++ << std::endl;
    std::cout << c++ << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0; 
}