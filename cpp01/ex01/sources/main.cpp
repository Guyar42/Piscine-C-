/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:48:33 by guyar             #+#    #+#             */
/*   Updated: 2023/01/12 15:24:33 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main (void)
{
	int i;

	i = 0;
	Zombie* newHorde = zombieHorde(10, "RandomZombie");
	while (i <= 10)
	{
		newHorde[i].announce();
		i++;
	}
	delete [] newHorde;
}