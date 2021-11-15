/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:40:14 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 19:45:56 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:
		std::string		name;
	public:
						Zombie();
						~Zombie();
		void			announce( void );
		void			setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);
#endif
