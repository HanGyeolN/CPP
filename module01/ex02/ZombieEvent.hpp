/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 05:05:56 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 12:18:20 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "Zombie.hpp"

class	ZombieEvent
{
private:
	std::string	type;
public:
	ZombieEvent();
	~ZombieEvent();
	void		setZombieType(const std::string &type);
	std::string	getRandomName();
	Zombie*		newZombie(const std::string name);
	Zombie*		randomChump();
	void		attack(Zombie &zombie);
};

#endif