/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:35:16 by guyar             #+#    #+#             */
/*   Updated: 2023/01/13 14:05:16 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main () 
{
	std::string str;
	str = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "adress str = " << &str << std::endl;
	std::cout << "stocked adress in stringPTR = " << stringPTR << std::endl;
	std::cout << "stocked adress in stringREF = " << &stringREF << std::endl;
	
	std::cout << "str = " << str << std::endl;
	std::cout << "pointed value by stringPTR = " << *stringPTR << std::endl; 
	std::cout << "pointed value by stringREF = " << stringREF << std::endl;

	return(0);
}