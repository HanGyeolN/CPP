/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 06:07:21 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 06:34:56 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spike club");

		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("sword");
		jim.attack();
	}
	return (0);
}