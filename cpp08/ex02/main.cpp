/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:06:28 by guyar             #+#    #+#             */
/*   Updated: 2023/10/02 19:43:51 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main ()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    mstack.push(30);


    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ite--;
    it++;

    std::cout << "it = " << *it << std::endl;
    std::cout << "ite = " << *ite << std::endl;

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    lst.push_back(30);

    std::list<int>::iterator itt = lst.begin();
    std::list<int>::iterator itte = lst.end();
    itte--;
    std::cout << "itt = " << *itt << std::endl;
    std::cout << "itte = " << *itte << std::endl;

    ///////////*******************************************/////////////////////////
    MutantStack<int> teststack;
    teststack = mstack;
    MutantStack<int>::iterator start = teststack.begin();
    MutantStack<int>::iterator end = teststack.end();
    end--;
    start++;

    std::cout << "start = " << *start << std::endl;
    std::cout << "end = " << *end << std::endl;

    // std::list<int> lst;
    // lst.push_back(5);
    // lst.push_back(17);
    // lst.push_back(30);

    // std::list<int>::iterator itt = lst.begin();
    // std::list<int>::iterator itte = lst.end();
    // itte--;
    // std::cout << "it = " << *itt << std::endl;
    // std::cout << "ite = " << *itte << std::endl;


    return (0);
}