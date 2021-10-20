/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:30:07 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/20 21:42:05 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(void)
{
	std::string	cmd;
	
	std::cout << "> ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "EXIT")
			break ;
		std::cout << cmd << std::endl;
		std::cout << "> ";

	}
	std::cout << "~ goodbye, crappy phonebook!" << std::endl;
	return (0);
}