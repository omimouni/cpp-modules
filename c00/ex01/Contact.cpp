/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:15:27 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/08 18:40:09 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::print()
{
	std::cout << "firstname: " << this->first_name << std::endl;
	std::cout << "lastname: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::setFirstName(std::string str) {
	this->first_name = str;
}

void	Contact::setLastName(std::string str) {
	this->last_name = str;
}

void	Contact::setNickamae(std::string str) {
	this->nickname = str;
}

void	Contact::setPhone(std::string str) {
	this->phone = str;
}

void	Contact::setDarketSecret(std::string str) {
	this->darkest_secret = str;
}