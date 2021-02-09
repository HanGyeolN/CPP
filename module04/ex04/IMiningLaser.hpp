/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:44:27 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:44:27 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MINING_LASER_HPP
# define I_MINING_LASER_HPP

# include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif