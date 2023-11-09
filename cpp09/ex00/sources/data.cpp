/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:12:24 by guyar             #+#    #+#             */
/*   Updated: 2023/10/09 16:29:47 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/data.hpp"
#include "../includes/ft.hpp"


Db::Db()
{
}

Db::~Db()
{
}

Db::Db(const Db &other) {
    _mdb = other._mdb;
}

Db& Db::operator=(const Db &other) {
    if (this != &other) {
        _mdb = other._mdb;
    }
    return *this;
}

void Db::openDb()
{
    _dataBase.open("data.csv");
}

bool Db::putInMap()
{
    std::string first;
    std::string second;
    std::string tmp;
    while (getline(this->_dataBase, tmp, '\n'))
    {
        first = tmp.substr(0, tmp.find_first_of(','));
        second = tmp.substr(tmp.find_first_of(',') + 1, tmp.size());
        if ((first != "date" && second != "exchange_rate" && (!dateParse(first))) || (!valParse(second, 0)))
        {
            std::cout << "Error in the Database" << std::endl;
            return(0);
        }
        _mdb.insert(std::make_pair(first, second));
    }
    return (1);
}

std::map<std::string, std::string> & Db::getDataBase()
{
    return _mdb;
}
