/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:49:04 by guyar             #+#    #+#             */
/*   Updated: 2023/01/12 15:29:52 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::string Zombie::getName (void) const {
	return this->_name;
}

void Zombie::setName (std::string str) {
	this->_name = str;
}
void Zombie::announce(void) const {
	std::cout << this->getName() << ": "
		<< "BraiiiinzzZZ..." 
		<< std::endl;
}