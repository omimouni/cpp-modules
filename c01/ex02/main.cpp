/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:07:01 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/23 10:17:27 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main()
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::left  << std::setw(40)
		<< "str address " << &str << std::endl;
		
	std::cout << std::left  << std::setw(40)
		<< "str address by pointer " << stringPTR << std::endl;
	std::cout << std::left  << std::setw(40)
		<< "str address by reference " << &stringREF << std::endl;

	std::cout << "---" << std::endl;
		
	std::cout << std::left  << std::setw(40)
		<< "stringPTR" << *stringPTR << std::endl;
	std::cout << std::left  << std::setw(40)
		<< "stringREF" << stringREF << std::endl;
	return (0);
}