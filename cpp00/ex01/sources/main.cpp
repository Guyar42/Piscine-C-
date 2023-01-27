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
        if (str == "ADD")
        {
			repertory.setContactInfoEmpty(i);
            repertory.setInfoContacts(i);
            i++;
		}
        else if (str == "SEARCH")
        {
            while (repertory.getContactsIndex(j) != 0 && j < 8)
            {
                repertory.getContactsName(j);
                j++;
            }
            j = 0;
            std::cout << "Enter contact's index" << "\n";
			repertory.setTypedIndex();
            if (repertory.ValideTypedIndex() == 0)
            {
				repertory.setTypedIndexInt();
				if (repertory.checkValideTypedIndex() > 0 && repertory.checkValideTypedIndex() < 9)
				{
					j = repertory.checkValideTypedIndex();
					repertory.getAllInfoContact(j - 1);
				}
				else
					std::cout << "Wrong index\n";
				std::cout << "Enter fonction" << std::endl;
            }
			repertory.setValideTypedIndexEmpty(); 
        }
        else if (str == "EXIT")
			break;
        else if (str != "")
			std::cout << "Wrong fonction, avaible fonction : ADD, SEARCH, EXIT" << std::endl;
		else
			std::cout << "Enter fonction" << std::endl;
		str = "";
		if (i == 8)
			i = 0;
		j = 0;
	}
    return(0);
}
