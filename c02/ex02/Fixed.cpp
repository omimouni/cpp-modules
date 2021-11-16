/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:02:51 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/16 17:57:55 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/**
 * Constructors
 * ------------------------------------------------------------------
*/

Fixed::Fixed() {
    this->integer = 0;
}

Fixed::Fixed(const int number) {
    this->integer = (number * 256); // 2 ^ 8
}

Fixed::Fixed(const float number) {
    this->integer = roundf(number * 256);
}

Fixed::Fixed( const Fixed &f ) {
    *this = f;
}

/**
 * Destructor
 * ------------------------------------------------------------------
*/

Fixed::~Fixed () {
}

/**
 * Raw bits manipulators
 * ------------------------------------------------------------------
*/

int Fixed::getRawBits( void ) const {
    return (this->integer);
}

void    Fixed::setRawBits( int const raw ) {
    this->integer = raw;
}

/**
 * Floating and int representation
 * ------------------------------------------------------------------
*/

float   Fixed::toFloat( void ) const {
    return ((float)this->integer)/256;
}

int     Fixed::toInt( void ) const {
    return (this->integer)/256;
}

/**
 * Assignment operator
 * ------------------------------------------------------------------
*/
Fixed&  Fixed::operator= ( const Fixed &f ) {
    this->setRawBits(f.getRawBits());
    return *this;
}

/**
 * Insertion operator
 * ------------------------------------------------------------------
*/

std::ostream & operator << (std::ostream &out, const Fixed &f) {
    out << f.toFloat();
    return (out);
}

/**
 * Arithmetic operators
 * ------------------------------------------------------------------
*/

Fixed   Fixed::operator+(Fixed f) {
    this->setRawBits(this->getRawBits() + f.getRawBits());
    return  *this;
}

Fixed   Fixed::operator-(Fixed f) {
    this->setRawBits(this->getRawBits() - f.getRawBits());
    return  *this;
}

Fixed   Fixed::operator*(Fixed f) {
    this->setRawBits((this->getRawBits() * f.getRawBits()) / (1 << this->bits));
    return *this;
}

Fixed   Fixed::operator/(Fixed f) {
    this->setRawBits(this->getRawBits() * (1 << this->bits) / f.getRawBits());
    return *this;
}

/**
 * Increment/Decrement operators
 * ------------------------------------------------------------------
*/

Fixed & Fixed::operator++() {
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed   Fixed::operator++(int x) {
    (void)x;
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed & Fixed::operator--() {
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed   Fixed::operator--(int x) {
    (void)x;
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

/**
 * Static helper functions
 * ------------------------------------------------------------------
*/

Fixed const   &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return b;
}

Fixed const   &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return b;
}


/**
 * Comparison operators
 * ------------------------------------------------------------------
*/

bool    operator== (const Fixed &a, const Fixed &b) {
    return (a.getRawBits() == b.getRawBits());
}

bool    operator!= (const Fixed &a, const Fixed &b) {
    return (a.getRawBits() != b.getRawBits());
}

bool    operator> (const Fixed &a, const Fixed &b) {
    return (a.getRawBits() > b.getRawBits());
}

bool    operator< (const Fixed &a, const Fixed &b) {
    return (a.getRawBits() < b.getRawBits());
}

bool    operator<= (const Fixed &a, const Fixed &b) {
    return (a.getRawBits() <= b.getRawBits());
}

bool    operator>= (const Fixed &a, const Fixed &b) {
    return (a.getRawBits() >= b.getRawBits());
}

