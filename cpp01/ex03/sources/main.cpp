/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:24:42 by guyar             #+#    #+#             */
/*   Updated: 2023/01/23 14:10:24 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.h"
#include "../includes/HumanB.h"
#include "../includes/Weapon.h"


int main ()
{
	{
	Weapon club = Weapon("crude spiked club");	
	HumanA Bob("Bob", club);
	Bob.attack();
	club.setType("some other type of club");
	Bob.attack();
	}
	
	{
	Weapon club = Weapon("crude spiked club");	
	HumanB jim("Jim");
	jim.setWeapon(&club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
}