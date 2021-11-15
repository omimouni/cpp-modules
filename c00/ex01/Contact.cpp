/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:15:27 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/13 20:41:33 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::print()
{
	std::cout << "firstname: " << this->first_name << std::endl;
	std::cout << "lastname: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phonebook: " << this->phone << std::endl;
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

std::string Contact::getFirstName() {
	return (this->first_name);
}

std::string Contact::getLastName() {
	return (this->last_name);
}

std::string Contact::getNickname() {
	return (this->nickname);
}

std::string Contact::getPhone() {
	return (this->phone);
}

std::string Contact::getDarketSecret() {
	return (this->darkest_secret);
}