/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:06:13 by guyar             #+#    #+#             */
/*   Updated: 2023/08/31 09:57:09 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <map>
#include <string>
#include <iostream>
#include "../includes/data.hpp"
#include "../includes/input.hpp"

// void putInMap(std::map<std::string, std::string> &m_input, std::string tmp)
// {
//     std::string first;
//     std::string second;
//     first = tmp.substr(0, tmp.find_first_of(','));
//     second = tmp.substr(tmp.find_first_of(',') + 1, tmp.size());
//     this.m_input.insert(std::make_pair(first, second));
// }

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
    db.putInMap();
    Input in;

    in.openInput(av);
    // in.putInMap();
    in.find(db);

    // std::cout << "2010-08-20 =" << m_input.find("2010-08-20")->second << std::endl;

    return(0);
}
    // parse the date and amount in txt;

    // put all in a vector till \n;
    // 
    // while (line)
        // {
        //     -> date = date;
        //     -> amount = amount;
        // }
    
    // map servirai a la DB;
    
    
    // look in the DB if correspondance;
    // multipli the amount by the value;