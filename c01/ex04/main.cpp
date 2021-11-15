/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:05:24 by omimouni          #+#    #+#             */
/*   Updated: 2021/11/15 20:02:17 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		line;

	size_t			pos;
	
	if (argc > 3)
	{
		input.open(argv[1]);
		output.open(std::string(argv[1]) + ".replace");
		std::string		origin(argv[2]); // init string with char *
		std::string		replace(argv[3]);

		pos = -1;
		while (std::getline(input, line))
		{
			while ((pos = line.find(origin, pos + 1)) != std::string::npos)
			{
				line.replace(pos, origin.length(), replace);
				pos += replace.length();
			}
			output << line << std::endl;
		}
		input.close();
		output.close();
	}
	return (0);
}