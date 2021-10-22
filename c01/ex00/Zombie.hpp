/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:40:14 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/22 17:50:55 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:
		std::string		name;
	public:
						Zombie(std::string name);
						~Zombie();
		void			announce( void );
};

// Helper functions ---
Zombie					*newZombie(std::string name);
void					randomChump(std::string name);

#endif
