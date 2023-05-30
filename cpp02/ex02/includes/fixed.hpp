/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:08:20 by guyar             #+#    #+#             */
/*   Updated: 2023/04/07 15:59:10 by guyar            ###   ########.fr       */
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
	~Fixed();
	Fixed & operator=(Fixed const & rhs);
	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator>(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;
	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator++(int i);
	Fixed operator--(int i);


	
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed min(Fixed & rhs1, Fixed & rhs2);
	static Fixed max(Fixed & rhs1, Fixed & rhs2);
	static Fixed min(Fixed const & rhs1, Fixed const & rhs2);
	static Fixed max(Fixed const & rhs1, Fixed const & rhs2);

private:
	int _rawBits;
	int const static _bits = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const &f);