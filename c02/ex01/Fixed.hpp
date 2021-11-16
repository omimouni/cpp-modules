/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:03:08 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/16 04:30:03 by omimouni         ###   ########.fr       */
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

    private:
        int integer;
        static const int bits = 8;
};


// Insertion operator --
std::ostream & operator << (std::ostream &out, const Fixed &f);


#endif