/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:12:45 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/02 11:42:45 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					value;
		static const int	bits = 8;
	
	public:
		Fixed(int value);
		Fixed(float value);
		Fixed();
		Fixed(Fixed const &f);
		~Fixed();

		float			toFloat(void) const;
		int				toInt(void) const;
		int				getRawBits( void ) const;
		void			setRawBits(int const raw);

		Fixed&			operator=(const Fixed &f);

};

std::ostream &operator <<(std::ostream &out, Fixed const &f);

#endif