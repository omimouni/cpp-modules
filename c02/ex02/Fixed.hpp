/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:03:08 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/16 17:34:53 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        Fixed( const Fixed &f );
        ~Fixed();
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;

        Fixed & operator = (const Fixed &f);

        // 
        Fixed   operator + (Fixed f);
        Fixed   operator - (Fixed f);
        Fixed   operator * (Fixed f);
        Fixed   operator / (Fixed f);

        Fixed   operator ++ (int x);
        Fixed   operator -- (int x);
        Fixed & operator ++ ();
        Fixed & operator -- ();

        // 

        static Fixed const & max(const Fixed &a, const Fixed &b);
        static Fixed const & min(const Fixed &a, const Fixed &b);

    private:
        int integer;
        static const int bits = 8;
};


std::ostream & operator << (std::ostream &out, const Fixed &f);
bool    operator== (const Fixed &a, const Fixed &b);
bool    operator!= (const Fixed &a, const Fixed &b);

bool    operator> (const Fixed &a, const Fixed &b);
bool    operator< (const Fixed &a, const Fixed &b);
bool    operator>= (const Fixed &a, const Fixed &b);
bool    operator<= (const Fixed &a, const Fixed &b);


#endif