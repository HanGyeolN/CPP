/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 04:09:54 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 14:34:07 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
private:
	std::string	type;
	std::string	name;
public:
	Zombie();
	Zombie(const std::string &name, const std::string &type);
	~Zombie();
	void	announce();
	void	setType(const std::string &type);
	void	setName(const std::string &name);
	std::string	getType();
	std::string	getName();
};

#endif