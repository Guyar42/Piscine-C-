/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:48:14 by guyar             #+#    #+#             */
/*   Updated: 2023/06/19 18:27:42 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream> 

template<typename T>
class MutantStack: public std::stack<T> {
    public:
        MutantStack();
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }

};

template<typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "constructor called for MutantStack" << std::endl;
}
template<typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "constructor called for MutantStack" << std::endl;
}