/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:08:48 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:08:59 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : 
	name_(name), apcost_(apcost), damage_(damage)
{
}

AWeapon::AWeapon(AWeapon const &copy)
{
	name_ = copy.name_;
	apcost_ = copy.apcost_;
	damage_ = copy.damage_;
}

AWeapon			&AWeapon::operator=(AWeapon const &ref)
{
	name_ = ref.name_;
	apcost_ = ref.apcost_;
	damage_ = ref.damage_;
	return (*this);
}

std::string		AWeapon::getName() const
{
	return (name_);
}

int				AWeapon::getAPCost() const
{
	return (apcost_);
}

int				AWeapon::getDamage() const
{
	return (damage_);
}