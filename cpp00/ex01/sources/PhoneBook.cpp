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

PhoneBook::PhoneBook(void) : typeIndexInt(0) { 
	std::cout << "Constructor called" << std::endl;
	return;	
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "index: ";
	std::getline(std::cin, this->typedIndex);
}

void PhoneBook::setTypedIndexInt() {
	this->typeIndexInt = std::stoi(this->getTypedIndex());
}

int PhoneBook::getTypedIndexInt() const{
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