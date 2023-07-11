/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:28:41 by guyar             #+#    #+#             */
/*   Updated: 2023/07/11 19:30:04 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <map>
#include <string>

void separate(std::string tmp, std::map<std::string, std::string> m_input)
{
    int found = tmp.find_first_of("|");
    m_input.insert(std::pair<std::string, std::string>(tmp.substr(0, found - 1), tmp.substr(found + 1, tmp.size())));


}

int main ()
{

    std::fstream input;
    std::map<std::string, std::string> m_input;
    std::string tmp;
    
    input.open("input.txt", std::fstream::in);
    while (getline(input, tmp))
    {
        separate(tmp, m_input);
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
}