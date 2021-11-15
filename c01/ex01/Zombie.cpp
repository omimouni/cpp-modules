/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:43:28 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 19:46:16 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = "default";
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> " << "had died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << "> "
		<< "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}