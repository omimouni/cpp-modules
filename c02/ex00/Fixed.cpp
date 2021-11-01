/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:13:07 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/24 20:27:07 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value) {
	this->value = value;
}

Fixed::Fixed(Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed&	Fixed::operator=(Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = f.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) {
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
