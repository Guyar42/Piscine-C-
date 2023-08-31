/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:40:05 by guyar             #+#    #+#             */
/*   Updated: 2023/08/31 19:29:19 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/input.hpp"
#include "../includes/ft.hpp"
#include <algorithm>


Input::Input()
{}

Input::~Input()
{}

void Input::openInput(char **av)
{
    _input.open(av[1]);
    // To secure;
}

void Input::putInMap()
{
    // std::string first;
    // std::string second;
    // std::string tmp;

    // while (getline(this->_input, tmp, '\n'))
    // {
    //     first = tmp.substr(0, tmp.find_first_of(' '));
    //     second = tmp.substr(tmp.find_last_of(' ') + 1, tmp.size());
    //     std::cout << "first ='" << first << "'" << std::endl;
    //     std::cout << "second ='" << second << "'" << std::endl; 
    // }

    // while (getline(this->_input, tmp, '\n'))
    // {
    // //    std::cout << "tmp ='" << tmp << "'" << std::endl;
    //     first = tmp.substr(0, tmp.find_first_of(' '));
    //     second = tmp.substr(tmp.find_last_of(' ') + 1, tmp.size());
    //     // std::cout << "first ='" << first << "'" << std::endl;
    //     // std::cout << "second ='" << second << "'" << std::endl; 
    //     _minput.insert(std::make_pair(first, second));
    // }
    // std::multimap<std::string, std::string>::iterator it = _minput.begin();
    //    std::cout << "first ='" << it->first << "'" << std::endl;
    //     it++; 
    //    std::cout << "first ='" << it->first << "'" << std::endl;
    //     it++; 
    //    std::cout << "first ='" << it->first << "'" << std::endl;

    // while ( it != _minput.end())
    // {
    //    std::cout << "first ='" << it->first << "'" << std::endl;
    //     std::cout << "second ='" << it->second << "'" << std::endl;
        // it++; 
    // }
    // std::cout << "second = " << _minput.find("2014-42-42")->second << std::endl;

    // use the multi map;
}



bool checkDate(std::string const & str)
{
    
    return true;
}

void Input::find(Db & db)
{
    
    std::string infirst; // date
    std::string insecond; // quantity
    std::string tmp;
    (void) db;
    std::map<std::string, std::string> dbtmp;
    std::map<std::string, std::string>::iterator itdb;

    dbtmp = db.getDataBase();

    while (getline(this->_input, tmp, '\n'))
    {
        infirst = tmp.substr(0, tmp.find_first_of(' '));
        insecond = tmp.substr(tmp.find_last_of(' ') + 1, tmp.size());
        if (dbtmp.upper_bound(infirst) != dbtmp.end()
           && dateParse(infirst)
            && valParse(insecond))
        {
            itdb = dbtmp.upper_bound(infirst);
            itdb--;
            float q = std::atof(insecond.c_str());
            float v = std::atof(itdb->second.c_str());
            // std::cout << "infirst = " << infirst;
            // std::cout << " insecond = " << insecond;
            // std::cout << " itdb->second.c_str() " << itdb->second.c_str() << std::endl;
            std::cout << infirst << " => " << insecond << " = ";
            std::cout << q * v << std::endl;
        }
        // else
        // {
        //     if (infirst != "date")
        //         std::cout << infirst << " not found in the Database" << std::endl;
        // }
    }
}

// std::cout << "2010-08-20 =" << m_input.find("2010-08-20")->second << std::endl;