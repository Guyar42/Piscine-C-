/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:12:29 by guyar             #+#    #+#             */
/*   Updated: 2023/07/11 16:19:44 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>
#pragma once

template< typename T >
void iter(T *tab, size_t len , void (*pf)(T &))
{
    size_t i;
    i = 0;
    while (i < len)
    {
        std::cout << "tab[" << i << "] before = " << tab[i] << std::endl;
        pf(tab[i]);
        std::cout <<  "tab[" << i << "] after = " << tab[i] << std::endl;
        i++;
    }
}