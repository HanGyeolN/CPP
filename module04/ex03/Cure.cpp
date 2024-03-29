/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:51:28 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:51:29 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
}

Cure&	Cure::operator=(const Cure& ref)
{
	AMateria::operator=(ref);
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria*	ret;

	ret = new Cure(*this);
	return (ret);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}