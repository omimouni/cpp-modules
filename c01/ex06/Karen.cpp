/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:34:27 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/24 18:41:26 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
	this->list[0] = &Karen::debug;
	this->list[1] = &Karen::info;
	this->list[2] = &Karen::warning;
	this->list[3] = &Karen::error;
}

void	Karen::debug() {
	std::cout << "[DEBUG] I love to get extra bacon for my"
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info() {
	std::cout << "[INFO] I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning() {
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error() {
	std::cout << "[ERROR] This is unacceptable, "
		<< "I want to speak to the manager now." << std::endl;
}

int		Karen::level2index(std::string level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (-1);
}

void	Karen::complain(std::string level) {
	(this->*list[this->level2index(level)])();
}