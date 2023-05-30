/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:46:22 by guyar             #+#    #+#             */
/*   Updated: 2023/03/30 13:50:49 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.h"

Weapon::Weapon() {
	std::cout << "Constructor Called for Weapon" << std::endl;
}
Weapon::Weapon(const std::string weapon): _type(weapon) {
	std::cout << "Constructor Called with Weapon type" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Destructor Called for Weapon" << std::endl;
}

std::string const & Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(const std::string str) {
	this->_type = str;
}


