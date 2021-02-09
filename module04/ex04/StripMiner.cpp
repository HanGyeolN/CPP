/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:45:57 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:45:58 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::~StripMiner()
{
}

StripMiner::StripMiner(StripMiner const &copy)
{
	(void)copy;
}


StripMiner&	StripMiner::operator=(StripMiner const &ref)
{
	(void)ref;
	return (*this);
}

void		StripMiner::mine(IAsteroid* target)
{
	std::cout << "* strip mining... got " << target->beMined(this) << "! *" << std::endl;
}