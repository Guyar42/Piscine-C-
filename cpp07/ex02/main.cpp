/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:19:13 by guyar             #+#    #+#             */
/*   Updated: 2023/09/28 20:29:33 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"


int main () {

    Array<unsigned int> A(5);
    
    unsigned i;
    i = 0;

    A.setData(1, 5);
    while (i< A.size())
    {
        std::cout << "data A = " << A.getData(i) << std::endl;
        i++;
    }
    i = 0;

    Array<unsigned int> C = A;
    try {
            while (i< C.size())
        {
            std::cout << "data c = " << C.getData(i) << std::endl;
            i++;
        }    
        std::cout << "size = " << A.size() << std::endl;
        std::cout << "C[0] =  " << C.getData(0) << std::endl;
        std::cout << "A[0] =  " << A[0] << std::endl;
        std::cout << "C[50] =  " << C[50] << std::endl;
        // std::cout << "C[1] =  " << C[1] << std::endl;

    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }

    // C.setData(1, 8);
    // i = 0;
    // while (i< A.size())
    // {
    //     std::cout << "data A = " << A.getData(i) << std::endl;
    //     i++;
    // }
    // i = 0;
    // while (i< C.size())
    // {
    //     std::cout << "data c = " << C.getData(i) << std::endl;
    //     i++;
    // }

    // Array<unsigned int> Z;


}