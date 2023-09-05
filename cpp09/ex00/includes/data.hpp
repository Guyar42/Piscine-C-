/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:05:38 by guyar             #+#    #+#             */
/*   Updated: 2023/09/05 10:23:42 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <map>
#include <string>
#include <iostream>

class Db {
    public:

        Db();
        ~Db();

        void openDb();
        bool putInMap();
        std::map<std::string, std::string> & getDataBase();
    private:
    
        std::map<std::string, std::string> _mdb;  
        std::fstream _dataBase;
};