/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 06:17:20 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 06:22:18 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	void(FragTrap::*skills[5])(std::string const &);
public:
	FragTrap();
	FragTrap(const std::string &name);
	~FragTrap();
	FragTrap(const FragTrap &ref);
	FragTrap	&operator=(FragTrap const &ref);

	void	init(void);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	vaulthunter_dot_exe(std::string const &target);

	void	torgueFiesta(std::string const &target);
	void	oneShotWonder(std::string const &target);
	void	laserInferno(std::string const &target);
	void	miniontrap(std::string const &target);
	void	meatUnicycle(std::string const &target);
};

#endif