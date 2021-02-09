/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:52:22 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:52:23 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
}

Ice&		Ice::operator=(const Ice& ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria*	ret;

	ret = new Ice(*this);
	return (ret);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}