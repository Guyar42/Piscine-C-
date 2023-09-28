/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:15:17 by guyar             #+#    #+#             */
/*   Updated: 2023/09/07 18:29:13 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.hpp"
#include "../includes/error.hpp"

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

void checkError(char ** av)
{
    std::string str;
    str = av[1];

    char separator = ' '; 
    size_t endIndex;
    size_t startIndex;
    size_t j = 0;
    size_t i = 0;
    std::string strings[ft_count(str, ' ') + 1];

    for (i = 0;i <= str.size(); i++)
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

    for (i = 0; i <= str.size(); i++)
    {
        if (strIsDigit(strings[i]))
        {
            throw ArgError::ArgError();
        }
    }
}