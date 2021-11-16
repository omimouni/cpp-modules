/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 03:03:08 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/16 03:18:03 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed( const Fixed &f );
        ~Fixed();
        Fixed & operator = (const Fixed &f);
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:
        int integer;
        static const int bits = 8;
};

#endif