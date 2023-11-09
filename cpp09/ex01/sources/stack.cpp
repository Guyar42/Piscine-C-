/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:19:31 by guyar             #+#    #+#             */
/*   Updated: 2023/10/09 16:16:08 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.hpp"
#include "../includes/ft.hpp"

Stack::Stack() {}
Stack::~Stack() {}

void Stack::setIn(char **av)
{
    _in = av[1];
}

Stack::Stack(const Stack &other) {
    _nb = other._nb;
    _opr = other._opr;
    _in = other._in;
}

Stack& Stack::operator=(const Stack &other) {
    if (this != &other) {
        _nb = other._nb;
        _opr = other._opr;
        _in = other._in;
    }
    return *this;
}
void Stack::calc()
{
    char separator = ' '; 
    size_t endIndex;
    size_t startIndex;
    size_t j = 0;
    size_t i = 0;
    std::string strings[ft_count(_in, ' ') + 1];

    for (i = 0;i <= _in.size(); i++)
    {    
        if (_in[i] == separator || i == _in.size())
        {
            endIndex = i;
            std::string temp;
            strings[j] = temp.append(_in, startIndex, endIndex - startIndex);
            j++;
            startIndex = endIndex + 1;
        }
    }

    float f; 
    float s;
    i = 0;
    for (i = 0; i <= static_cast<size_t>(ft_count(_in, ' ')); i++)
    {
        if (strings[i].size() != 1)
            throw InputError(); 
        else if (strIsDigit(strings[i]))
                _nb.push((std::atof(strings[i].c_str())));
        else
        {
            if (_nb.size() < 2)
                throw InputError(); 
            f = _nb.top();
            _nb.pop();
            s = _nb.top();
            _nb.pop(); 
            switch (strings[i][0])
            {
                case '+':
                    _nb.push(s + f);
                    break;
                case '-':
                    _nb.push(s - f);
                    break;
                case '*':
                    _nb.push(s * f);
                    break;
                case '/':
                    _nb.push(s / f);
                    break;
                default:
                    throw InputError();
                    break;
            }
        }
    }
    if (_nb.size() != 1)
        throw InputError();
    else
        std::cout << _nb.top() << std::endl;
}

const char * Stack::InputError::what() const throw()
{
    return "Error in input";
}