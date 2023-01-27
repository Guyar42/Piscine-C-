/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:11:59 by guyar             #+#    #+#             */
/*   Updated: 2023/01/12 14:28:33 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string> 

class Zombie {
	public:
	
	Zombie(std::string name);
	~Zombie( void );

	void announce( void ) const;
	std::string getName(void) const;
	void setName(std::string str); 

	private:

	std::string _name;

};

Zombie* ft_newZombie(std::string name);
void randomChump (std::string name);
