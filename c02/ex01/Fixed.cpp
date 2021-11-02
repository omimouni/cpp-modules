/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:13:07 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/02 11:46:13 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value;
}

Fixed::Fixed(float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(value) << this->bits;
}

Fixed::Fixed(Fixed const &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed&	Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	
	this->setRawBits(f.getRawBits());
	
	return *this;
}
std::ostream &operator <<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits memeber function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
	std::cout << "setRawBits memeber function called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
	// int	float;

	return (this->value);
}

int	Fixed::toInt() const {
	return (roundf(this->value));
}