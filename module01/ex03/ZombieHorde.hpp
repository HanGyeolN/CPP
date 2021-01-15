/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:25:11 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 07:39:38 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieHorde
{
private:
	Zombie	*horde;
public:
	ZombieHorde(int n);
	~ZombieHorde();
};

#endif