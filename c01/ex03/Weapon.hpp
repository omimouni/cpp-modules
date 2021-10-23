/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:19:09 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/23 10:57:06 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {
	private:
		std::string			type;
	public:
		Weapon();
		Weapon(std::string	type);
		std::string const&	getType();
		void				setType(std::string type);
};

#endif