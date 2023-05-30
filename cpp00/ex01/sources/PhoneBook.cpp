/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:33:26 by guyar             #+#    #+#             */
/*   Updated: 2023/01/05 23:18:32 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

#define max 8

PhoneBook::PhoneBook(void) : typeIndexInt(0) { 
	// std::cout << "Constructor called" << std::endl;
	return;	
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor called" << std::endl;
	return;
}

int PhoneBook::getContactsIndex(int i) const {
	return (this->contacts[i].getIndex());
}

void PhoneBook::setInfoContacts(int i) {
	
	this->contacts[i].setInfo(i);
	return;
}

void PhoneBook::getContactsName(int i) const {
	this->contacts[i].getName();
}

std::string PhoneBook::getTypedIndex() const {
	return this->typedIndex;
}

void PhoneBook::setTypedIndex() {
	std::cout << "\n";
	std::cout << "index: ";
	std::getline(std::cin, this->typedIndex);
}


void PhoneBook::setTypedIndexInt() {
	std::string str = this->getTypedIndex();
	this->typeIndexInt = atoi(str.c_str());
}

int PhoneBook::getTypedIndexInt() const {
	return (this->typeIndexInt);
}

int PhoneBook::checkValideTypedIndex() const {
	int i = 0; 
	int j = 0;
	
	if (this->getTypedIndexInt() == this->getContactsIndex(i))
	{	
			j = this->getContactsIndex(i);
	}
	while (this->getTypedIndexInt() != this->getContactsIndex(i) && j == 0 && i < 9)
	{
		i++;
	 	if (this->getTypedIndexInt() == this->getContactsIndex(i))
			j = this->getContactsIndex(i);
	}
	return (j);
}

void PhoneBook::getAllInfoContact(int i) const {
	this->contacts[i].getInfo();
}

int PhoneBook::ValideTypedIndex() const {
	if (typedIndex[0] < '0' || typedIndex[0] > '9')
		return (1);
	if (typedIndex[1])
		return (1);
	else
		return (0);
}

void PhoneBook::setValideTypedIndexEmpty() {
	this->typedIndex = "";
}

void PhoneBook::setContactInfoEmpty(int i) {
	this->contacts[i].setInfoEmpty(i);
}

void PhoneBook::display() {
	std::cout << "\n";
	std::cout << "0|";
	std::cout << std::setfill (' ') << std::setw (10)
			<< "Firstname" << "|";
	std::cout << std::setfill (' ') << std::setw (10)
			<< "Lastname" << "|";
	std::cout << std::setfill (' ') << std::setw (10)
			<< "Nickname" << "|" << std::endl;
}

int PhoneBook::add(int i, std::string str) {
	if (str == "ADD")
    {
		this->setContactInfoEmpty(i);
        this->setInfoContacts(i);
        i++;
        std::cout << "Enter fonction" << std::endl;
	}
	return (i);
}

int PhoneBook::search(int j, std::string str) {
	if (str == "SEARCH")
    {
        this->display();
        while (this->getContactsIndex(j) != 0 && j < max)
        {
            this->getContactsName(j);
            j++;
        }
        j = 0;
		std::cout << "\nEnter contact's index" << std::endl;
		this->setTypedIndex();
        if (this->ValideTypedIndex() == 0)
        {
			this->setTypedIndexInt();
			if (this->checkValideTypedIndex() > 0 && this->checkValideTypedIndex() < max + 1)
			{
				j = this->checkValideTypedIndex();
				this->getAllInfoContact(j - 1);
			}
			else
				std::cout << "Wrong index\n";
			std::cout << "Enter fonction" << std::endl;
        }
		this->setValideTypedIndexEmpty(); 
    }
	return (j);
}