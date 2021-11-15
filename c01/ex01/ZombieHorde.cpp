/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:59:01 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 19:46:04 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zh;
	int		i;

	zh = new Zombie[N];
	i = 0;
	while (i < N){
		zh[i].setName(name + "-" + std::to_string(i + 1));
		i++;
	}

	return (zh);
}