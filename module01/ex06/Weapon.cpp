/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 05:33:37 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 06:09:51 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(const std::string type) : type(type)
{
}

const std::string&	Weapon::getType()
{
	return (this->type);
}

void				Weapon::setType(const std::string& type)
{
	this->type = type;
}