/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:14:11 by guyar             #+#    #+#             */
/*   Updated: 2023/10/09 16:31:06 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/stack.hpp"
#include "../includes/ft.hpp"

int main (int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw Stack::InputError();
        Stack a;
        a.setIn(av);
        a.calc();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}