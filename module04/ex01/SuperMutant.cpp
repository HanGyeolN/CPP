/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:25:02 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:25:06 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(SUPER_MUTANT_CONST::HP, SUPER_MUTANT_CONST::TYPE)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &ref)
{
	Enemy::operator=(ref);
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	if (damage >= 3)
		damage -= 3;
	else
		damage = 0;
	Enemy::takeDamage(damage);
}