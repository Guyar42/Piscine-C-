/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:44:41 by guyar             #+#    #+#             */
/*   Updated: 2023/01/17 22:50:53 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


int main (int ac, char **av) 
{

	if (ac != 4)
	{
		std::cout << "arg error" << std::endl;
		return (0);
	}
	std::ifstream ifs(av[1]);
	if (!ifs.good())
	{
		std::cout << "Infile error" << std::endl;
		return(0);
	}
	std::stringstream buffer;
	std::string buff;
	std::string outfilename;
	size_t found;
	size_t len;
	
	outfilename = av[1];
	outfilename += ".replace";
	
	std::ofstream outfile(outfilename);
	
	buffer << ifs.rdbuf();
	buff = buffer.str();
	len = strlen(av[2]);
	found = buff.find(av[2]);
	if (found <= LONG_MAX)
	{
		buff.erase(found, len);
		buff.insert(found, av[3]);	
	}
	while (found <= LONG_MAX)
	{
		found = buff.find(av[2]);
		if (found <= LONG_MAX)
		{
			buff.erase(found, len);
			buff.insert(found, av[3]);
		}
	}
	outfile << buff << std::endl;
	outfile.close();
	return(0);
}
