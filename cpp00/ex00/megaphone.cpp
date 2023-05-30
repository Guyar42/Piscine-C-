/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:17:52 by guyar             #+#    #+#             */
/*   Updated: 2023/01/25 12:47:16 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **argv)
{
	int i;
	int j;
	
	if (ac == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return(0);
	}
	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			char ch = toupper(argv[i][j]); 
			std::cout << ch;
			j++;
		}
		j = 0;
		i++;
		if (argv[i])
			std::cout << " ";
	}
	std::cout << std::endl;
}