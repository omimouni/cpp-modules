/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:02:51 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/17 18:59:54 by omimouni         ###   ########.fr       */
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
    this->integer = (number * (1 << this->bits)); // 2 ^ 8
}

Fixed::Fixed(const float number) {
    this->integer = roundf(number * (1 << this->bits));
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
    return ((float)this->integer)/(1 << this->bits);
}

int     Fixed::toInt( void ) const {
    return (this->integer)/(1 << this->bits);
}

/**
 * Assignment operator
 * ------------------------------------------------------------------
*/
Fixed&  Fixed::operator= ( const Fixed &f ) {
    this->integer = f.getRawBits();
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
    this->integer = this->integer + f.getRawBits();
    return  *this;
}

Fixed   Fixed::operator-(Fixed f) {
    this->integer = this->integer - f.getRawBits();
    return  *this;
}

Fixed   Fixed::operator*(Fixed f) {
    // this->setRawBits((this->getRawBits() * f.getRawBits()) / (1 << this->bits));
    this->integer = (this->integer * f.getRawBits()) / (1 << this->bits);
    return *this;
}

Fixed   Fixed::operator/(Fixed f) {
    // this->setRawBits(this->getRawBits() * (1 << this->bits) / f.getRawBits());
    // TODO: Cast to long
    this->integer = (this->integer * (1 << this->bits)) / f.getRawBits();
    return *this;
}

/**
 * Increment/Decrement operators
 * ------------------------------------------------------------------
*/

Fixed & Fixed::operator++() {
    // this->setRawBits(this->getRawBits() + 1);
    this->integer = this->integer + 1;
    return *this;
}

Fixed   Fixed::operator++(int x) {
    (void)x; // BUG: Wtf?
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed & Fixed::operator--() {
    // this->setRawBits(this->getRawBits() - 1);
    this->integer = this->integer - 1;
    return *this;
}

Fixed   Fixed::operator--(int x) {
    (void)x; // BUG: WTF?
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

/**
 * Comparison operators
 * ------------------------------------------------------------------
*/

bool    Fixed::operator == (const Fixed &other) const {
    return (this->integer == other.getRawBits());
}

bool    Fixed::operator != (const Fixed &other) const {
    return (this->integer != other.getRawBits());
}

bool    Fixed::operator > (const Fixed &other) const {
    return (this->integer > other.getRawBits());
}

bool    Fixed::operator >= (const Fixed &other) const {
    return (this->integer >= other.getRawBits());
}

bool    Fixed::operator < (const Fixed &other) const {
    return (this->integer < other.getRawBits());
}

bool    Fixed::operator <= (const Fixed &other) const {
    return (this->integer <= other.getRawBits());
}

/**
 * Static helper functions
 * ------------------------------------------------------------------
*/

Fixed   const& Fixed::max(Fixed const &a, Fixed const &b){
    if (a > b)
        return a;
    return b;
}

Fixed   &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

Fixed   &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}

Fixed   const&Fixed::min(Fixed const &a, Fixed const &b) {
    if (a < b)
        return a;
    return b;
}