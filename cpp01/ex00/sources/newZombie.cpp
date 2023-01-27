/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:14:27 by guyar             #+#    #+#             */
/*   Updated: 2023/01/12 14:57:15 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* ft_newZombie(std::string name) {
	Zombie* newZombie = new Zombie(name);
	return newZombie;
}

// void randomChump (std::string name) {
// 	Zombie* newZombie = ft_newZombie(name);
// 	newZombie->announce();
// }

void randomChump (std::string name) {
	Zombie newZombie(name);
	newZombie.announce();
}