/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:20:51 by guyar             #+#    #+#             */
/*   Updated: 2023/01/16 15:14:57 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanB {
	public:

	HumanB(const std::string name);
	~HumanB();
	
	std::string getName() const;
	
	void setName(std::string str);
	void setWeapon(Weapon *Weapon);
	void attack();
	
	private:

	std::string _name;
	Weapon *_weapon;

};