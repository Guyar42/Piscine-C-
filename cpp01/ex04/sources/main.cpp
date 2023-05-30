/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:44:41 by guyar             #+#    #+#             */
/*   Updated: 2023/03/31 15:18:47 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <climits>


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
	std::string outname;
	size_t found;
	size_t len;
	
	outname = av[1];
	outname += ".replace";
	
	std::cout << "outfile name = " << outname << std::endl;
	
	std::ofstream outfile(outname.c_str());

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
