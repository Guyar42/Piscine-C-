/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:49:56 by guyar             #+#    #+#             */
/*   Updated: 2023/01/12 15:29:36 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string> 

class Zombie {
	public:
	
	Zombie(void);
	~Zombie(void);

	void announce(void) const;
	std::string getName(void) const;
	void setName(std::string str); 

	private:

	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);