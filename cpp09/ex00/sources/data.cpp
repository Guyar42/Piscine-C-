/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:12:24 by guyar             #+#    #+#             */
/*   Updated: 2023/08/29 20:10:16 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/data.hpp"

Db::Db()
{
}

Db::~Db()
{

}

void Db::openDb()
{
    _dataBase.open("data.csv");
    // To secure;
}

void Db::putInMap()
{
    std::string first;
    std::string second;
    std::string tmp;
    while (getline(this->_dataBase, tmp, '\n'))
    {
        first = tmp.substr(0, tmp.find_first_of(','));
        second = tmp.substr(tmp.find_first_of(',') + 1, tmp.size());
        _mdb.insert(std::make_pair(first, second));
    }
}

std::map<std::string, std::string> & Db::getDataBase()
{
    return _mdb;
}
