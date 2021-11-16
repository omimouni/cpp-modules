/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:02:51 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/16 17:37:51 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {
    this->integer = 0;
}

Fixed::Fixed( const Fixed &f ) {
    *this = f;
}

Fixed::Fixed(const int number) {
    this->integer = (number * 256); // 2 ^ 8
}

Fixed::Fixed(const float number) {
    this->integer = roundf(number * 256);
}

Fixed&  Fixed::operator= ( const Fixed &f ) {
    this->setRawBits(f.getRawBits());
    return *this;
}


int Fixed::getRawBits( void ) const {
    return (this->integer);
}

void    Fixed::setRawBits( int const raw ) {
    this->integer = raw;
}


float   Fixed::toFloat( void ) const {
    return ((float)this->integer)/256;
}

int     Fixed::toInt( void ) const {
    return (this->integer)/256;
}

Fixed::~Fixed () {
}

std::ostream & operator << (std::ostream &out, const Fixed &f) {
    out << f.toFloat();
    return (out);
}

Fixed   Fixed::operator+(Fixed f) {
    this->setRawBits(this->getRawBits() + f.getRawBits());
    return  *this;
}

Fixed   Fixed::operator-(Fixed f) {
    this->setRawBits(this->getRawBits() - f.getRawBits());
    return  *this;
}

Fixed   Fixed::operator*(Fixed f) {
    Fixed   a;

    a.setRawBits((this->getRawBits() * f.getRawBits()) / (1 << this->bits));
    return (a);
}

Fixed   Fixed::operator/(Fixed f) {
    Fixed   a;

    // a.setRawBits((this->getRawBits() * f.getRawBits()) / (1 << this->bits));
    a.setRawBits(this->getRawBits() * (1 << this->bits) / f.getRawBits());
    return (a);
}

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

// 
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