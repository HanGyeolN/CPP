/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:23:50 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:23:56 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon(POWERFIST_CONST::NAME, POWERFIST_CONST::AP_COST, POWERFIST_CONST::DAMAGE)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)
{
}

PowerFist		&PowerFist::operator=(PowerFist const &ref)
{
	AWeapon::operator=(ref);
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}