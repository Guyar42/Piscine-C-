/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:09:36 by guyar             #+#    #+#             */
/*   Updated: 2023/06/19 16:40:04 by guyar            ###   ########.fr       */
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

    // ::easyfind(lst1, 8);

    // if (::easyfind(lst1, 8) == true)
    //     std::cout << "you number have been found" << std::endl;
    // else
    // //     std::cout << "you number haven't been found" << std::endl; 


    if (::easyfind(lst1, 42) != lst1.end())
    {
        std::cout << "you number have been found" << std::endl; 
    }
    else
    {
        std::cout << "you number haven't been found" << std::endl; 
    }
}