/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:08:20 by guyar             #+#    #+#             */
/*   Updated: 2023/04/06 17:41:20 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{

public:
	Fixed();
	Fixed(Fixed const & src); // copy constructor
	Fixed(int const num);
	Fixed(float const num);
	Fixed & operator=(Fixed const & rhs); // assignment constructor
	~Fixed();
	
	int getRawBits() const;
	int const static getstat();
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _rawBits;
	int const static _bits = 8;
	
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);