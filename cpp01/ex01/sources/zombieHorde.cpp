/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:59:11 by guyar             #+#    #+#             */
/*   Updated: 2023/01/12 15:29:06 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	int i;

	i = 0;
	Zombie* newHorde = new Zombie[N]; 
	while (i <= N)
	{
		newHorde[i].setName(name);
		i++;
	}
	return newHorde;
}
