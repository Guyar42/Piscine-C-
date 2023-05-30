/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:43:22 by guyar             #+#    #+#             */
/*   Updated: 2023/03/30 13:50:44 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon {

public:
	
	Weapon();
	Weapon(const std::string weapon);
	~Weapon(void);
	
	std::string const & getType() const;
	void setType(const std::string str);
	
	
private:
	
	std::string _type;
};
