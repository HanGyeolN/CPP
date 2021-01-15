/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 05:21:34 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 06:09:35 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string		type;
public:
	Weapon();
	~Weapon();
	Weapon(const std::string type);
	const std::string&	getType();
	void				setType(const std::string& type);
};

#endif