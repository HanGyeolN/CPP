/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 04:09:38 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 07:41:33 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie() : name("normal"), type("lv01")
{
	cout << this->name << " zombie is spawned" << endl;
}

Zombie::~Zombie()
{
	cout << this->name << " zombie is deleted" << endl;
}

Zombie::Zombie(const std::string &name, const std::string &type) : name(name), type(type)
{
	cout << this->name << " zombie is spawned" << endl;
}

void	Zombie::setName(const std::string &name)
{
	this->name = name;
}

std::string	Zombie::getName()
{
	return (this->name);
}

void	Zombie::setType(const std::string &type)
{
	this->type = type;
}

std::string	Zombie::getType()
{
	return (this->type);
}

void	Zombie::announce()
{
	cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << endl;
}