/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:27:09 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 19:55:39 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	weapon(weapon)
{
	this->name = name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with "
		<< this->weapon.getType() << std::endl;
}