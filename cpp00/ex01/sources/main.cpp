/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:50:26 by guyar             #+#    #+#             */
/*   Updated: 2023/01/25 12:50:28 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#define max 3

int main(void)
{  
    PhoneBook repertory;
    std::string str;
    std::string typedindex;
    int i;
    int j;

    i = 0;
    j = 0;
    std::cout << "Welcome to the awesome Phonebook" << std::endl;
    std::cout << "Avaible fonction : ADD, SEARCH, EXIT" << std::endl;
	while (std::getline (std::cin, str) && !std::cin.eof())
    {
        i = repertory.add(i, str);
        j = repertory.search(j, str);
        if (str == "EXIT")
			break;
        if (str != "")
			std::cout << "Avaible fonction : ADD, SEARCH, EXIT" << std::endl;
		str = "";
		if (i == max)
			i = 0;
		j = 0;
	}
    return(0);
}