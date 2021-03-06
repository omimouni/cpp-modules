/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:37:42 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/14 21:30:25 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{

	std::cout << " --- newZombie ---" << std::endl;
	Zombie	*z;
	z = newZombie("heap");
	z->announce();
	delete (z);
	
	std::cout << std::endl << "--- randomChump(std::string name) ---" << std::endl;
	randomChump("stack");

	std::cout << "-> End of program !" << std::endl;
	return (0);
}