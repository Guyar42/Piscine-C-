/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:02:33 by guyar             #+#    #+#             */
/*   Updated: 2023/03/30 13:51:55 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanA {
	public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	std::string getName() const;
	void setName(std::string str);
	void attack();
	
	private:

	std::string _name;
	Weapon & _weapon;

};
