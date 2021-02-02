/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 01:45:12 by hna               #+#    #+#             */
/*   Updated: 2021/02/03 01:45:17 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name) : name_(name)
{
	std::cout << "Some reandom victim called " << name_ << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name_ << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	name_ = copy.name_;
}

Victim		&Victim::operator=(const Victim &ref)
{
	name_ = ref.name_;
	return (*this);
}

std::string		Victim::getName(void) const
{
	return (name_);
}

void			Victim::getPolymortphed(void) const
{
	std::cout << name_ << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Victim &ref)
{
	os << "I'm " << ref.getName() << " and I like otters!" << std::endl;
	return (os);
}