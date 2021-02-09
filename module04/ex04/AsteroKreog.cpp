/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:43:32 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:43:36 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog() : name_("asterokreog")
{
}

AsteroKreog::~AsteroKreog()
{
}

AsteroKreog::AsteroKreog(AsteroKreog const &copy) : name_(copy.name_)
{
}

AsteroKreog&	AsteroKreog::operator=(AsteroKreog const &ref)
{
	name_ = ref.name_;
	return (*this);
}

// parametric polymorphisms
std::string		AsteroKreog::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return ("Meium");
}

std::string		AsteroKreog::beMined(StripMiner *miner) const
{
	(void)miner;
	return ("Tartarite");
}

std::string		AsteroKreog::getName() const
{
	return (name_);
}