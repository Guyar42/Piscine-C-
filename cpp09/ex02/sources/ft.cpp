/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:15:17 by guyar             #+#    #+#             */
/*   Updated: 2023/10/11 12:22:26 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.hpp"
#include "../includes/error.hpp"
#include "../includes/myVector.hpp"
#include "../includes/myDeque.hpp"

int ft_count(std::string str, char c)
{
    int i = 0, j = 0;

    while(str[i])
    {
        if (str[i] == c)
            j++;
        i++;
    }
    return j;
}

void strIsDigit(std::string const & str)
{
    
    int i;
    i = 0;

    while (str[i])
    {
        if (!std::isdigit(str[i]))
        {
            throw argError();
        }
        i++;
    }
}

void strIsPositive(std::string const & str)
{
    if (std::atoi(str.c_str()) < 0)
        throw argError();
}

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
        v.putInVector(std::atoi(tmp.c_str()));
        q.putInDeque(std::atoi(tmp.c_str()));
    }
    std::cout << std::endl;
    v.sort();
    q.sort();
}