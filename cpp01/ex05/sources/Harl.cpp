/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:15:59 by guyar             #+#    #+#             */
/*   Updated: 2023/01/23 13:30:01 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.h"

Harl::Harl(/* args */)
{
	std::cout << "Constructor called for Harl" << std::endl;
}


Harl::~Harl()
{
	std::cout << "Destructor called for Harl" << std::endl;
}

void Harl::debug()
{
	std::cout << "This is a debug message" << std::endl;
}

void Harl::info()
{
	std::cout << "This is an info message" << std::endl;
}


void Harl::warning()
{
	std::cout << "This is a warning message" << std::endl;
}

void Harl::error()
{
	std::cout << "This is an error message" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ft)(void);
	std::string str[] = {"debug", "info", "warning", "error"};
	int i = 0;
	while (i < 4 && str[i] != level)
	{
		if (str[i] != level)
			i++;
	}
	

	switch(i)
	{
		case 0: ft = &Harl::debug; break;
		case 1: ft = &Harl::info; break;
		case 2: ft = &Harl::warning; break;
		case 3: ft = &Harl::error;	break;
	}
if (i < 4)
	(this->*ft)();
else
	std::cout << "wrong message error" << std::endl;
}

