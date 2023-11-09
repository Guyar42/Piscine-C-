/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:22:17 by guyar             #+#    #+#             */
/*   Updated: 2023/10/09 16:33:49 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include "../includes/myVector.hpp"
#include "../includes/ft.hpp"
#include "../includes/myDeque.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "arg Error" << std::endl;
        return (1);   
    }
    try
    {
        PmergeMe(av);
    }
    catch(std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
}
