/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:02:51 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/17 17:41:17 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/**
 * --------------
 * Fixed Point --
 * --------------
 * 
 * Resources:
 * -> https://spin.atomicobject.com/2012/03/15/simple-fixed-point-math/
 * ->
 */

Fixed::Fixed() {
    this->integer = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &f ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed(const int number) {
    std::cout << "Int constructor called" << std::endl;
    this->integer = (number * (1 << this->bits)); // 2 ^ 8
}

Fixed::Fixed(const float number) {
    std::cout << "Float constructor called" << std::endl;
    this->integer = roundf(number * (1 << this->bits));
}

Fixed&  Fixed::operator= ( const Fixed &f ) {
    std::cout << "Assignation operator called" << std::endl;
    this->integer = f.getRawBits();
    return (*this);
}


int Fixed::getRawBits( void ) const {
    return (this->integer);
}

void    Fixed::setRawBits( int const raw ) {
    this->integer = raw;
}


float   Fixed::toFloat( void ) const {
    return ((float)this->integer)/(1 << this->bits);
}

int     Fixed::toInt( void ) const {
    return (this->integer)/(1 << this->bits);
}

Fixed::~Fixed () {
    std::cout << "Destructor called" << std::endl;
}

std::ostream & operator << (std::ostream &out, const Fixed &f) {
    out << f.toFloat();
    return (out);
}
