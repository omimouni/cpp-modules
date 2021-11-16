/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:02:51 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/16 03:22:49 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    this->integer = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &f ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed&  Fixed::operator= ( const Fixed &f ) {
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(f.getRawBits());
    return *this;
}


int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits memeber function called" << std::endl;
    return (this->integer);
}

void    Fixed::setRawBits( int const raw ) {
    this->integer = raw;
}

Fixed::~Fixed () {
    std::cout << "Destructor called" << std::endl;
}