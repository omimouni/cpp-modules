/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:31:19 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/24 18:40:18 by omimouni         ###   ########.fr       */
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
		void	(Karen::*list[4])(void);
	public:
		Karen();
		void	complain(std::string level);
		int		level2index(std::string level);
};

#endif