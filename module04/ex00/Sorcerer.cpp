/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 01:45:39 by hna               #+#    #+#             */
/*   Updated: 2021/02/03 01:45:39 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : name_(name), title_(title)
{
	std::cout << name_ << ", " << title_ << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name_ << ", " << title_ << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	name_ = copy.name_;
	title_ = copy.title_;
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &ref)
{
	name_ = ref.name_;
	title_ = ref.title_;
	return (*this);
}

std::string		Sorcerer::getName(void) const
{
	return (name_);
}

std::string		Sorcerer::getTitle(void) const
{
	return (title_);
}

void			Sorcerer::polymorph(const Victim &ref) const
{
	ref.getPolymortphed();
}

std::ostream	&operator<<(std::ostream &os, const Sorcerer &ref)
{
	os << "I am " << ref.getName() << ", " << ref.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}