/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:44:46 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:44:46 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid() : name_("KoalaSteroid")
{
}

KoalaSteroid::~KoalaSteroid()
{
}

KoalaSteroid::KoalaSteroid(KoalaSteroid const &copy) : name_(copy.name_)
{
}

KoalaSteroid&	KoalaSteroid::operator=(KoalaSteroid const &ref)
{
	name_ = ref.name_;
	return (*this);
}

std::string		KoalaSteroid::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return ("Dragonite");
}

std::string		KoalaSteroid::beMined(StripMiner *miner) const
{
	(void)miner;
	return ("Flavium");
}

std::string		KoalaSteroid::getName() const
{
	return (name_);
}