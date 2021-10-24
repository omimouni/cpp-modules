/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:12:45 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/24 20:22:19 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	private:
		int					value;
		static const int	bits = 8;
	
	public:
		Fixed(int value);
		Fixed();
		Fixed(Fixed &f);
		~Fixed();
		Fixed & operator=(Fixed &f);

		int		getRawBits( void );
		void	setRawBits(int const raw);
};

#endif