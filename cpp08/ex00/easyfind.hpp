/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:11:14 by guyar             #+#    #+#             */
/*   Updated: 2023/10/02 17:43:27 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

class CantFindTheValue: public std::exception {
    virtual const char * what() const throw();
};

template <typename T>
typename T::const_iterator easyfind(const T & container, int need)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), need); 

    if (it == container.end())
        throw ::CantFindTheValue();
    else
        return it; 
}