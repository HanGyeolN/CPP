/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:53:05 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:53:06 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
	(void)copy;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &ref)
{
	(void)ref;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	ISpaceMarine	*ret;

	ret = new AssaultTerminator(*this);
	return (ret);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}