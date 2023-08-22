/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:23:57 by guyar             #+#    #+#             */
/*   Updated: 2023/07/11 15:52:52 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T >
T const & max(T const & x, T const & y)
{
    return (x > y ? x : y);
}

template< typename T >
T const & min(T const & x, T const & y)
{
    return (x < y ? x : y);
}

template< typename T >
void swap(T & x, T & y) {
    T tmp;
    tmp = y;
    y = x;
    x = tmp;
    return;
}