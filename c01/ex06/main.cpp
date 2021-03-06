/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:42:33 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 20:17:49 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	int	ind;

	if (argc == 2)
	{
		Karen	karen;
		ind	= karen.level2index(argv[1]);
		switch (ind)
		{
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
	return (0);
}