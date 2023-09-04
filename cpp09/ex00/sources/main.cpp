/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:06:13 by guyar             #+#    #+#             */
/*   Updated: 2023/09/04 19:39:44 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <map>
#include <string>
#include <iostream>
#include "../includes/data.hpp"
#include "../includes/input.hpp"


int main (int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cout << "wrong argument" << std::endl;
        return (0);
    }

    Db db;
    db.openDb();
    
    if (!db.putInMap())
        return (1);
    
    Input in;
    in.openInput(av);
    // in.putInMap();
    in.find(db);
    return(0);
}