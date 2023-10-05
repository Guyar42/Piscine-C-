/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:22:17 by guyar             #+#    #+#             */
/*   Updated: 2023/10/05 22:43:30 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include "../includes/myVector.hpp"
#include "../includes/ft.hpp"
#include "../includes/myDeque.hpp"

void PmergeMe(char **av)
{
    MyVector v;
    MyDeque q;
    std::string tmp; 
    int i;
    
    i = 0;
    std::cout << "Before ";
    for(i = 1; av[i]; i++)
    {
        tmp = av[i];
        strIsDigit(tmp);
        strIsPositive(tmp);
        std::cout << tmp;
        if (av[i + 1])
            std::cout << " ";
        v.putInVector(std::stoi(tmp));
        q.putInDeque(std::stoi(tmp));
    }
    std::cout << std::endl;
    v.sort();
    q.sort();
}

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
