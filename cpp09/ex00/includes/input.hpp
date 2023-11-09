/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:38:40 by guyar             #+#    #+#             */
/*   Updated: 2023/10/09 16:26:29 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <map>
#include <string>
#include <iostream>
#include <cstdlib>
#include "../includes/data.hpp"

class Db;
class Input {
    public:

        Input();
        ~Input();
        Input(const Input &other);
        Input& operator=(const Input &other);
        void openInput(char **av);
        void find(Db & db);

        
    private:
        char **_av;
        std::fstream _input;
};