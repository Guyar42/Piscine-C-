/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:05:38 by guyar             #+#    #+#             */
/*   Updated: 2023/08/29 20:07:58 by guyar            ###   ########.fr       */
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
        void putInMap();
        std::map<std::string, std::string> & getDataBase();
    private:
    
        std::map<std::string, std::string> _mdb;  
        std::fstream _dataBase;
};

 // std::map<std::string, std::string>::iterator it = m_input.begin();