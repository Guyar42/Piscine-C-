/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:39:09 by guyar             #+#    #+#             */
/*   Updated: 2023/06/08 18:38:06 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Iter.hpp"

template< typename T >
void ft_setx(T &s){    
    s = 'x';
}

int main () {

    std::string tab[] = {"premier", "deuxieme", "troisieme"};
    int tab2[] = {1, 2, 3};

    size_t len = 3;

    ::iter(tab2, len, ft_setx);
    return 0;
}
