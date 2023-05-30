/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guyar <guyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:08:13 by guyar             #+#    #+#             */
/*   Updated: 2023/04/07 15:46:50 by guyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num)
{
	this->_rawBits = (num << this->_bits);
	// std::cout << "Constructor Fixed int const to fixed point called" << std::endl;
}

Fixed::Fixed(float const num)
{
	this->_rawBits = roundf(num * (1<<Fixed::_bits));
	// std::cout << "Constructor Fixed float const to fixed point called" << std::endl;

}

Fixed::~Fixed()
{
	// std::cout << "Destructor called for fixe" << std::endl;
	
}

Fixed::Fixed(Fixed const & src)
{
	// std::cout << "Copy constructor called for Fixed" << std::endl;
	*this = src;
	return;
}

Fixed & Fixed::operator=( Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs )
		this->_rawBits = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return (float)(this->_rawBits/(float)(1<<_bits));
}

int Fixed::toInt(void) const {
 	return this->_rawBits>>_bits;
}

Fixed Fixed::operator+(Fixed const & rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const {
	return Fixed(this->toFloat()- rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const {
	return Fixed(this->toFloat()* rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator<(Fixed const & rhs) const {
	if (this->_rawBits < rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const & rhs) const {
	if (this->_rawBits <= rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>(Fixed const & rhs) const {
	if (this->_rawBits > rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=(Fixed const & rhs) const {
	if (this->_rawBits >= rhs.getRawBits())
		return true;
	else
		return false;
}
bool Fixed::operator==(Fixed const & rhs) const {
	if (this->_rawBits == rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=(Fixed const & rhs) const {
	if (this->_rawBits != rhs.getRawBits())
		return true;
	else
		return false;
}

Fixed& Fixed::operator++(void) {
	this->_rawBits++;
	return *this;
}

Fixed& Fixed::operator--(void) {
	this->_rawBits--;
	return *this;
}

Fixed Fixed::operator++(int i) {
	(void)i;
	Fixed tmp;
	tmp = *this;
	this->_rawBits++;
	return tmp;
}

Fixed Fixed::operator--(int i) {
	(void) i;
	Fixed tmp;
	tmp = *this;
	this->_rawBits--;
	return *this;
}

Fixed Fixed::min(Fixed & rhs1, Fixed & rhs2) {
	if (rhs1 < rhs2)
		return rhs1;
	else
		return rhs2;
}

Fixed Fixed::min(Fixed const & rhs1, Fixed const & rhs2) {
	if (rhs1 < rhs2)
		return rhs1;
	else
		return rhs2;
}

Fixed Fixed::max(Fixed & rhs1, Fixed & rhs2) {
	if (rhs1 > rhs2)
		return rhs1;
	else
		return rhs2;
}

Fixed Fixed::max(Fixed const & rhs1, Fixed const & rhs2) {
	if (rhs1 > rhs2)
		return rhs1;
	else
		return rhs2;
}

std::ostream &operator<<(std::ostream &out, Fixed const &f) {
	out<<f.toFloat();
	return out;
}