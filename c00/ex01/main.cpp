/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:30:07 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/21 19:14:52 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	
	std::cout << "> ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
			phonebook.read_contact();
		else if (cmd == "SEARCH")
			phonebook.print_contacts();
		std::cout << "> ";
	}
	return (0);
}