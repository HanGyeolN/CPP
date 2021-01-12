/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 05:05:53 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 14:40:33 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

using std::cout;
using std::endl;

namespace ZOMBIE_NAMEPOOL
{
	std::string const title[5] = {"big", "small", "super", "hidden", "unique"};
	std::string	const color[5] = {"red", "blue", "green", "white", "yellow"};
	std::string const food[5] = {"cake", "cookie", "lemon", "apple", "sugar"};
}

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(const std::string &type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(const std::string name)
{
	Zombie*		new_zombie;

	if (this->type.compare("") == 0)
	{
		cout << "please set zombie type." << endl;
		return (0);
	}
	new_zombie = new Zombie(name, this->type);
	return (new_zombie);
}

std::string	ZombieEvent::getRandomName()
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

Zombie*	ZombieEvent::randomChump()
{
	Zombie		*random_zombie;

	random_zombie = this->newZombie(getRandomName());
	random_zombie->announce();
	return (random_zombie);
}

void	ZombieEvent::attack(Zombie &zombie)
{
	cout << zombie.getName() << " zombie dead." << endl;
}