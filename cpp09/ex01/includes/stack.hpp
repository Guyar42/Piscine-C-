/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:19:18 by guyar             #+#    #+#             */
/*   Updated: 2023/09/05 18:07:49 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>

class Stack {
    public:
        Stack();
        ~Stack();

        void setIn(char **av);
        void calc();

        class InputError: public std::exception {
            virtual const char * what() const throw();
        };
    
    private:
        std::stack<float> _nb;
        std::stack<char> _opr;
        std::string _in;
};