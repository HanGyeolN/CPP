/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 04:44:23 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 04:44:24 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_ASTEROID_HPP
# define I_ASTEROID_HPP

# include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner *) const = 0;
	virtual std::string beMined(StripMiner *) const = 0;
	virtual std::string getName() const = 0;
};

#endif