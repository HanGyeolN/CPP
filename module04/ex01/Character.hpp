/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 10:53:47 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:10:26 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

namespace CHARACTER_CONST
{
	const int	INIT_AP = 40;
	const int	MAX_AP = 40;
}

class Character
{
private:
	std::string		name_;
	int				ap_;
	AWeapon			*weapon_;
	Character();

public:
	Character(std::string const &name);
	Character(Character const &copy);
	virtual		~Character();
	Character	&operator=(Character const &ref);

	void		recoverAP();
	void		equip(AWeapon *);
	void		attack(Enemy *);
	std::string	getName() const;
	int			getAP() const;
	AWeapon		*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &os, Character &character);

#endif