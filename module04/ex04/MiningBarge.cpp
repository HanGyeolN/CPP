/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:45:34 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:45:35 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	std::cout << "Barge constructed" << std::endl;
	for (int i = 0; i < MININGBARGE_CONST::MAX_LASER; i++)
	{
		lasers_[i] = nullptr;
	}
}

MiningBarge::~MiningBarge()
{
	std::cout << "Barge deconstructed" << std::endl;
	for (int i = 0; i < MININGBARGE_CONST::MAX_LASER; i++)
	{
		if (lasers_[i])
			delete lasers_[i];
	}
}

MiningBarge::MiningBarge(MiningBarge const &copy)
{
	for (int i = 0; i < MININGBARGE_CONST::MAX_LASER; i++)
	{
		lasers_[i] = copy.lasers_[i];
	}
}

MiningBarge&	MiningBarge::operator=(MiningBarge const &ref)
{
	for (int i = 0; i < MININGBARGE_CONST::MAX_LASER; i++)
	{
		lasers_[i] = ref.lasers_[i];
	}
	return (*this);
}

void	MiningBarge::equip(IMiningLaser* laser)
{
	for (int i = 0; i < MININGBARGE_CONST::MAX_LASER; i++)
	{
		if (lasers_[i] == nullptr)
		{
			lasers_[i] = laser;
			return ;
		}
	}
}

void	MiningBarge::mine(IAsteroid* target) const
{
	for (int i = 0; i < MININGBARGE_CONST::MAX_LASER; i++)
	{
		if (lasers_[i])
			lasers_[i]->mine(target);
	}
}