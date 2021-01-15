/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:27:42 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 08:27:08 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

namespace ZOMBIE_NAMEPOOL
{
	std::string const title[5] = {"big", "small", "super", "hidden", "unique"};
	std::string	const color[5] = {"red", "blue", "green", "white", "yellow"};
	std::string const food[5] = {"cake", "cookie", "lemon", "apple", "sugar"};
}

static std::string	getRandomName()
{
	int			num;
	std::string	name;

	num = rand() % 5;
	name = ZOMBIE_NAMEPOOL::title[num];
	num = rand() % 5;
	name.append("_");
	name += ZOMBIE_NAMEPOOL::color[num];
	num = rand() % 5;
	name.append("_");
	name += ZOMBIE_NAMEPOOL::food[num];
	return (name);
}

ZombieHorde::ZombieHorde(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		std::cout << "invalid value n" << std::endl;
		return ;
	}
	horde = new Zombie[n]();
	while (i < n)
	{
		horde[i].setName(getRandomName());
		horde[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete	[]this->horde;
}