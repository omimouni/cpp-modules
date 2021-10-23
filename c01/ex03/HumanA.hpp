/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:25:09 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/23 11:07:30 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class	HumanA {
	private:
		Weapon		&weapon;
		std::string name;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack();
};

#endif