/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:31:19 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/23 20:37:41 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>

class	Karen {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error (void);
	public:
		void	complain(std::string level);
};

#endif