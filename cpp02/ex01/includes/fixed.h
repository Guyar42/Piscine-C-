/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:08:20 by guyar             #+#    #+#             */
/*   Updated: 2023/01/25 13:10:20 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{

public:
	Fixed();
	Fixed(Fixed const & src); // copy constructor
	~Fixed();
	Fixed & operator=(Fixed const & rhs); // assignment constructor
	
	int getRawBits() const;
	int const static getstat();
	void setRawBits(int const raw);

private:
	int _rawBits;
	int const static _stat;

};