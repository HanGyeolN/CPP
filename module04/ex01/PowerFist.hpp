/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:41:57 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:23:43 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

namespace	POWERFIST_CONST
{
	const std::string	NAME = "Power Fist";
	const int			DAMAGE = 50;
	const int			AP_COST = 8;
}

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &copy);
	virtual		~PowerFist();
	PowerFist	&operator=(PowerFist const &ref);

	void		attack() const;
};

#endif