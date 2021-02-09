/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:45:26 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:45:26 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINING_BARGE_HPP
# define MINING_BARGE_HPP

# include "IMiningLaser.hpp"
# include <string>
# include <iostream>

namespace MININGBARGE_CONST
{
	const int	MAX_LASER = 4;
}

class MiningBarge
{
private:
	IMiningLaser	*lasers_[MININGBARGE_CONST::MAX_LASER];
public:
	MiningBarge();
	~MiningBarge();
	MiningBarge(MiningBarge const &copy);
	MiningBarge&	operator=(MiningBarge const &ref);

	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;
};

#endif