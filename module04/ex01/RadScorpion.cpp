/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:24:37 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:24:38 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(RADSCORPION_CONST::HP, RADSCORPION_CONST::TYPE)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy)
{
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &ref)
{
	Enemy::operator=(ref);
	return (*this);
}

void	RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}