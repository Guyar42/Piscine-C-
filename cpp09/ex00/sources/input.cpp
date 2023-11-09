/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:40:05 by guyar             #+#    #+#             */
/*   Updated: 2023/10/09 16:26:27 by guyar            ###   ########.fr       */
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
    _av = av;
    _input.open(_av[1]);
}

Input::Input(const Input &other): _av(other._av) {
    
}

Input& Input::operator=(const Input &other) {
    if (this != &other) {
        _av = other._av;
    }
    return *this;
}

void Input::find(Db & db)
{
    std::string infirst; // date
    std::string insecond; // quantity
    std::string tmp;
    std::map<std::string, std::string> dbtmp;
    std::map<std::string, std::string>::iterator itdb;

    dbtmp = db.getDataBase();

    while (getline(this->_input, tmp, '\n'))
    {
        infirst = tmp.substr(0, tmp.find_first_of(' '));
        if (tmp.find_first_of('|') != std::string::npos)
        {    
            insecond = tmp.substr(tmp.find_first_of('|') + 1, tmp.size());
            if (insecond.find_first_not_of(' ') != std::string::npos 
                && insecond[0] == ' ')
                insecond = insecond.substr(insecond.find_first_not_of(' '), insecond.size());
            else
                insecond = infirst;
        }
        else
            insecond = infirst;
        if (dbtmp.upper_bound(infirst) != dbtmp.end()
           && dateParse(infirst)
            && valParse(insecond, 1))
        {
            itdb = dbtmp.upper_bound(infirst);
            if (itdb != dbtmp.begin())
            {
                itdb--;
                float q = std::atof(insecond.c_str());
                float v = std::atof(itdb->second.c_str());
                std::cout << infirst << " => " << insecond << " = ";
                std::cout << q * v << std::endl;
            }
            else
                std::cout << "Error value: " << infirst << std::endl;
        }
    }
}