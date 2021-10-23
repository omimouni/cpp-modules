/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:56:15 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/23 11:59:58 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class	HumanB {
	private:
		Weapon	*weapon;
		std::string name;
		
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif