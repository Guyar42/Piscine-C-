/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:21:28 by guyar             #+#    #+#             */
/*   Updated: 2023/01/16 15:12:56 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.h"
#include <iostream>

HumanB::HumanB(const std::string name) : _name(name) {
	std::cout << "Constructor Called for HumanB" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "Desstructor Called for HumanB" << std::endl;
}

std::string HumanB::getName() const {
	return this->_name;
}

void HumanB::setName(std::string str) {
	this->_name = str;
}

void HumanB::attack() {
	std::cout << this->_name
			<< " attacks with his "
			<< this->_weapon->getType()
			<< std::endl;
}

void HumanB::setWeapon(Weapon *Weapon) {
	this->_weapon = Weapon;
}