/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 05:34:00 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 06:18:11 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon			&weapon;
	std::string		name;
public:
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();
	void	attack();
};

#endif