/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:15:17 by guyar             #+#    #+#             */
/*   Updated: 2023/09/05 14:30:35 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.hpp"

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
