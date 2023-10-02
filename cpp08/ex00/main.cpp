/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:09:36 by guyar             #+#    #+#             */
/*   Updated: 2023/10/02 17:43:07 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <iostream>

int main () {
    std::list<int> lst1;

    lst1.push_back(1);
    lst1.push_back(42);
    lst1.push_back(69);
    lst1.push_back(77);

    try
    {
        ::easyfind(lst1, 69);
        std::cout << "you number have been found" << std::endl; 
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
}