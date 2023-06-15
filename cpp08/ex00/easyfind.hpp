/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:11:14 by guyar             #+#    #+#             */
/*   Updated: 2023/06/15 16:49:47 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
typename T::const_iterator easyfind(const T& container, int need)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator end = container.end();

    while (it != end) {
        if (*it == need)
        {
            std::cout << "*it == " << *it << std::endl;
            return it;
        }
        ++it;
    }
    std::cout << "it send end "<< std::endl;
    return end;
}