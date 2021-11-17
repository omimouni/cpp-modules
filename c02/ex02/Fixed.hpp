/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:03:08 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/17 18:52:03 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
    public:

        // Constructors
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        Fixed( const Fixed &f );

        // Descturctor
        ~Fixed();
        
        // raw bits manipulators
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        // Floating and int representation
        float   toFloat( void ) const;
        int     toInt( void ) const;

        // Assignment operator
        Fixed & operator = (const Fixed &f);

        // Arithmetic operatos
        Fixed   operator + (Fixed f);
        Fixed   operator - (Fixed f);
        Fixed   operator * (Fixed f);
        Fixed   operator / (Fixed f);

        // Increment/Decrement operators
        Fixed   operator ++ (int x);
        Fixed   operator -- (int x);
        Fixed & operator ++ ();
        Fixed & operator -- ();

        // Comparison operators

        bool    operator == (const Fixed &other) const;
        bool    operator != (const Fixed &other) const;
        bool    operator > (const Fixed &other) const;
        bool    operator >= (const Fixed &other) const;
        bool    operator < (const Fixed &other) const;
        bool    operator <= (const Fixed &other) const;

        // Static helper functions
        static Fixed const& max(Fixed const &a, Fixed const &b);
        static Fixed & max(Fixed &a, Fixed &b);
        static Fixed & min(Fixed &a, Fixed &b);
        static Fixed const& min(Fixed const &a, Fixed const &b);

    private:
        int integer;
        static const int bits = 8;
};


// Insertion operator
std::ostream & operator << (std::ostream &out, const Fixed &f);



#endif