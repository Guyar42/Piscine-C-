/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:23:51 by guyar             #+#    #+#             */
/*   Updated: 2023/06/08 16:24:25 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Template.hpp"

int main (void) {

    int a = 42;
    int b = 69;

    std::string c = "chaine1";
    std::string d = "chaine2";
    

    std::cout << ::max<int>(a, b) << std::endl;
    std::cout << ::max(a, b) << std::endl;
    std::cout << ::max(c, d) << std::endl;
    
    ::swap(c, d);
    std::cout << "string c = " << c << " string d = " << d << std::endl;

    ::swap(a, b);
    std::cout << "int a = " << a << " int b = " << b << std::endl;
    std::cout << ::max(a, b) << std::endl;

    std::cout << ::min(a, b) << std::endl;
    
}