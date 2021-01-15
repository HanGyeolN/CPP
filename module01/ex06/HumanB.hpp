/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 05:47:27 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 06:22:07 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon			*weapon;
	std::string		name;
public:
	HumanB(const std::string &name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif