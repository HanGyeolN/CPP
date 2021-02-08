/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:34:09 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:24:28 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

namespace RADSCORPION_CONST
{
	const int			HP = 80;
	const std::string	TYPE = "RadScorpion";
}

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &copy);
	virtual 	~RadScorpion();
	RadScorpion	&operator=(RadScorpion const &ref);

	int				getHP() const;
	virtual void	takeDamage(int);
};

#endif