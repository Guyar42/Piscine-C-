/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:28:41 by guyar             #+#    #+#             */
/*   Updated: 2023/08/22 23:00:26 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <map>
#include <string>

void putInMap(std::map<std::string, std::string> m_input, std::string tmp)
{
    std::string first;
    std::string second;

    (void) m_input;
    first = tmp.substr(0, tmp.find_first_of(','));
    second = tmp.substr(tmp.find_first_of(',') + 1, tmp.size());
    std::cout << "first =" << first << "'"<<std::endl;
    std::cout << "second =" << second << "'" << std::endl; 
}

int main (int ac, char **av)
{

    (void)ac;
    std::fstream input;
    std::map<std::string, std::string> m_input;
    std::string tmp;
    
    input.open(av[1], std::fstream::in);
    int i;
    i = 0;
    while (getline(input, tmp, '\n') && i < 4)
    {
        std::cout << tmp << std::endl;
        putInMap(m_input, tmp);
        std::cout << i << std::endl;
        i++;
    }
    return(0);
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
}