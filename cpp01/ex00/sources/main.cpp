/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:18:50 by guyar             #+#    #+#             */
/*   Updated: 2023/01/16 12:41:09 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"



int main() {

	randomChump("ZombieA");
	Zombie* newZombie = ft_newZombie("ZombieB");
	newZombie->announce();
	delete newZombie;
	
	return (0);
}