/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:06:51 by guyar             #+#    #+#             */
/*   Updated: 2023/01/16 14:30:03 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.h"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
	std::cout << "Constructor Called for Human A" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "Desstructor Called for Human A" << std::endl;
}

std::string HumanA::getName() const {
	return this->_name;
}

void HumanA::setName(std::string str) {
	this->_name = str;
}

void HumanA::attack() {
	std::cout << this->_name
			<< " attacks with his "
			<< this->_weapon.getType()
			<< std::endl;
}