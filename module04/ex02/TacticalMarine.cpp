/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:54:11 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:54:12 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
	(void)copy;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &ref)
{
	(void)ref;
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine	*ret;

	ret = new TacticalMarine(*this);
	return (ret);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}
void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}