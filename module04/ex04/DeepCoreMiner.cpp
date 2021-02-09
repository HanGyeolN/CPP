/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:44:10 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:44:10 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &copy)
{
	(void)copy;
}

DeepCoreMiner&	DeepCoreMiner::operator=(DeepCoreMiner const &ref)
{
	(void)ref;
	return (*this);
}

// subtype polymorphisms
void			DeepCoreMiner::mine(IAsteroid* target)
{
	std::cout << "* mining deep... got " << target->beMined(this) << "! *" << std::endl;
}