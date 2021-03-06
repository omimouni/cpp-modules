/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:19:29 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 00:18:27 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	this->filled = -1;
	this->current_num = 0;
}

void	PhoneBook::read_contact()
{
	std::string	tmp;

	if (this->filled < CONTACTS_NUM - 1)
		this->filled++;
	// Read new contact
	std::cout << "first name: ";
	std::getline(std::cin, tmp);
	this->contacts[this->current_num].setFirstName(tmp);
	
	std::cout << "last name: ";
	std::getline(std::cin, tmp);
	this->contacts[this->current_num].setLastName(tmp);


	std::cout << "nickame: ";
	std::getline(std::cin, tmp);
	this->contacts[this->current_num].setNickamae(tmp);
	
	std::cout << "Phonenumber : ";
	std::getline(std::cin, tmp);
	this->contacts[this->current_num].setPhone(tmp);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, tmp);
	this->contacts[this->current_num].setDarketSecret(tmp);
	
	std::cout << "✅ Contact successfully added";
	// Updating indexes
	this->current_num = (this->current_num + 1) % CONTACTS_NUM;
	std::cout << std::endl;
}

std::string	PhoneBook::print_sub(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	return (str);
}

void	PhoneBook::print_contacts()
{
	int	i;
	int	in;
	std::string cmd;

	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "firstname" << "|";
	std::cout << std::setw(10) << "lastname" << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;
	i = 0;
	while (i < this->filled + 1)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) 
			<< this->print_sub(this->contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) 
			<< this->print_sub(this->contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) 
			<< this->print_sub(this->contacts[i].getNickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "choose index : " ;
	std::getline(std::cin, cmd);
	// TODO: check if cmd is digit ??
	in = std::atoi(cmd.c_str());
	if (in >= 0 && in <= this->filled)
		this->contacts[in].print();
	else
		std::cout << "the what ?" << std::endl;
}
