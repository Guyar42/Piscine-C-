/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:55:55 by guyar             #+#    #+#             */
/*   Updated: 2023/09/04 19:39:25 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.hpp"

bool strIsDigit(std::string const & str)
{
    
    int i;
    i = 0;

    while (str[i])
    {
        if (!std::isdigit(str[i]))
        {
            return false;
        }
        i++;
    }
    return true;
}

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

bool dateParse(std::string str) {
    
    int startIndex = 0;
    int endIndex = 0;
    char separator = '-';
    int j = 0;
    std::string strings[3];
    int nb = ft_count(str, '-');

    // split;
    if (nb != 2 )
    {
        std::cout << "Error value = " << str << std::endl;
        return (0);
    } 
    for (int i = 0; i <= str.size(); i++)
    {    
        if (str[i] == separator || i == str.size())
        {
            endIndex = i;
            std::string temp;
            strings[j] = temp.append(str, startIndex, endIndex - startIndex);
            j++;
            startIndex = endIndex + 1;
        }
    }
    // check error
    if (strings[0].size() != 4
        || !strIsDigit(strings[0]))
        {
            std::cout << "Error value = " << str << std::endl;
            return (0);
        }
    if (strings[1].size() != 2
        || !strIsDigit(strings[1])
        || atoi(strings[1].c_str()) < 1 || atoi(strings[1].c_str()) > 12
        || atoi(strings[1].c_str()) == 0)
        {   
            std::cout << "Error value = " << str << std::endl;
            return(0);
        }
    if (strings[2].size() != 2
        || !strIsDigit(strings[2])
        || atoi(strings[2].c_str()) < 0 || atoi(strings[2].c_str()) > 31
        || atoi(strings[2].c_str()) == 0)
        {
            std::cout << "Error value = " << str << std::endl;
            return(0);
        }
    else
        return(1);
}

bool valParse(std::string insecond)
{
    std::string befDot;
    std::string aftDot;
    int nb = ft_count(insecond, '.');
    if (insecond == "exchange_rate")
        return (1);
    if (nb > 1)
    {
        std::cout << "Error: not a positive number = " << insecond << std::endl;
        return (0);
    }
    if (nb == 0)
    {
        if (strIsDigit(insecond) == 0)
        {
            std::cout << "Error: not a positive number = " << insecond << std::endl;
            return (0);
        }
    }
    if (nb == 1)
    {
        aftDot = insecond.substr(insecond.find_first_of('.') + 1, insecond.size());
        befDot = insecond.substr(0, insecond.find_first_of('.'));
        if (strIsDigit(aftDot) == 0
            || strIsDigit(befDot) == 0)
        {
            std::cout << "Error: not a positive number = " << insecond << std::endl;
            return(0);
        }

    }
    float s = std::atof(insecond.c_str());
    if (s < 0)
    {
        std::cout << "Error: not a positive number = " << insecond << std::endl;
        return (0);
    }
    else if (s > 100000)
    {
        std::cout << "Error: to large a number = " << insecond << std::endl;
        return (0);
    }
    return (1);
}