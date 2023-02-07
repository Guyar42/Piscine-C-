/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:52:41 by guyar             #+#    #+#             */
/*   Updated: 2023/01/27 15:10:59 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Contact.hpp"

Contact::Contact(void): index(0) 
{
	// std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return; 
}

void Contact::setInfo(int i) 
{
	while(this->FirstName == "")
	{
		std::cout << "First Name: ";
		std::getline (std::cin, this->FirstName);
		// std::cin >> this->FirstName;
	}
	while(this->LasteName == "")
	{
		std::cout << "Laste Name: ";
		std::getline (std::cin, this->LasteName);
	}
	while(this->Nickname == "")
	{
		std::cout << "Nickname: ";
		std::getline (std::cin, this->Nickname);
	}
	while(this->PhoneNumber == "")
	{
		std::cout << "Phone number: ";
		std::getline (std::cin, this->PhoneNumber);
	}
	while(this->DarkestSecret == "")
	{
		std::cout << "Darkest secret: ";
		std::getline (std::cin, this->DarkestSecret);
	}
	std::cout << "New contact Created" << std::endl;
	this->index = i + 1;
}

int Contact::getIndex(void) const
{
	
	return (this->index);
}

void Contact::getName(void) const
{
	
	std::string tmp;
	std::cout << this->index << "|";
	if (this->FirstName.length() > 10)
	{
		tmp = this->FirstName.substr(0, 10);
		tmp[9] = '.';
		std::cout << tmp;
	}
	else
	{	
		std::cout << std::setfill (' ') << std::setw (10)
		<< this->FirstName;
	}
	std::cout << "|";
	if (this->LasteName.length() > 10)
	{
		tmp = this->LasteName.substr(0, 10);
		tmp[9] = '.';
		std::cout << tmp;
	}
	else
	{
		std::cout << std::setfill (' ') << std::setw (10)
				<< this->LasteName;
	}
	std::cout << "|";
	if (this->Nickname.length() > 10)
	{
		tmp = this->Nickname.substr(0, 10);
		tmp[9] = '.';
		std::cout << tmp;
	}
	else
	{			
		std::cout << std::setfill (' ') << std::setw (10)
				<< this->Nickname;
	}
	std::cout << "|" << std::endl;
}

void Contact::getInfo() const
{
	std::cout << "Firstname: " << this->FirstName << std::endl
		<< "Lastname: " << this->LasteName << std::endl
		<< "Nickname: " << this->Nickname << std::endl
		<< "Phone number: " << this->PhoneNumber << std::endl
		<< "Darkest secret: " << this->DarkestSecret << std::endl;
}

void Contact::setInfoEmpty (int i)
{
	this->FirstName = "";
	this->LasteName = "";
	this->Nickname = "";
	this->PhoneNumber = "";
	this->DarkestSecret = "";
	this->index = i + 1;
}
