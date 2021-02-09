/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:45:47 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:45:48 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"
# include <string>
# include <iostream>

class StripMiner : public IMiningLaser
{
public:
	StripMiner();
	virtual ~StripMiner();
	StripMiner(StripMiner const &copy);
	StripMiner&	operator=(StripMiner const &ref);
	virtual void	mine(IAsteroid*);
};

#endif