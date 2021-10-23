/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:18:30 by omimouni          #+#    #+#             */
/*   Updated: 2021/10/23 12:03:37 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon	club = Weapon("M4");
		HumanA	bob("bob", club);
		bob.attack();
		club.setType("AK47");
		bob.attack();
	}
	{
		Weapon	club = Weapon("M4");
		HumanB	jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("AK47");
		jim.attack();
	}
	return (0);
}