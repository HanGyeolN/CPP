/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 01:44:46 by hna               #+#    #+#             */
/*   Updated: 2021/02/03 01:47:49 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim()
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy)
{
	name_ = copy.name_;
}

Peon		&Peon::operator=(const Peon &ref)
{
	name_ = ref.name_;
	return (*this);
}

std::string		Peon::getName(void) const
{
	return (name_);
}

void			Peon::getPolymortphed(void) const
{
	std::cout << name_ << " has been turned into a pink pony!" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Peon &ref)
{
	os << "I'm " << ref.getName() << " and I like otters!" << std::endl;
	return (os);
}