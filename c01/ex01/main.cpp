/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:37:42 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 19:49:39 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NUM 3

int	main(void)
{
	Zombie	*z;
	int		i;

	z = zombieHorde(NUM, "Testx");
	i = 0;
	while (i < NUM)
	{
		z[i].announce();
		i++;
	}
	delete[] z;
	return (0);
}