/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:43:28 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/22 17:51:39 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
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