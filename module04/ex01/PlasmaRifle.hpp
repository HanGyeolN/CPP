/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:28:10 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:23:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

namespace	PLASMARIFLE_CONST
{
	const std::string	NAME = "Plasma Rifle";
	const int			DAMAGE = 21;
	const int			AP_COST = 5;
}

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &copy);
	virtual ~PlasmaRifle();
	PlasmaRifle		&operator=(PlasmaRifle const &ref);

	void			attack() const;
};

#endif