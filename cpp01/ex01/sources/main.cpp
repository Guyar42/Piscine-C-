/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:21:07 by guyar             #+#    #+#             */
/*   Updated: 2023/03/30 13:21:12 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main (void)
{
	int i;

	i = 0;
	Zombie* newHorde = zombieHorde(10, "RandomZombie");
	while (i < 10)
	{
		newHorde[i].announce();
		i++;
	}
	delete [] newHorde;
}