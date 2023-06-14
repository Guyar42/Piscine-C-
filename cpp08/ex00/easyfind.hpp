/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:11:14 by guyar             #+#    #+#             */
/*   Updated: 2023/06/14 17:54:16 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
typename T::const_iterator easyfind(const T& container, int need)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator end = container.end();

    while (it != end) {
        if (*it == need)
            return it;
        ++it;
    }

    return end;
}