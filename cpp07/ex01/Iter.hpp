/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:12:29 by guyar             #+#    #+#             */
/*   Updated: 2023/06/08 18:34:54 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>

template< typename T >
void iter(T *tab, size_t len , void (*pf)(T &))
{
    size_t i;
    i = 0;
    while (i < len)
    {
        std::cout << tab[i] << std::endl;
        pf(tab[i]);
        std::cout << tab[i] << std::endl;
        i++;
    }
}