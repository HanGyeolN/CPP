/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 06:17:20 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 05:54:31 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class FragTrap
{
private:
	void(FragTrap::*skills[5])(std::string const &);
	unsigned int		hit_points_;
	unsigned int		max_hit_points_;
	unsigned int		energy_points_;
	unsigned int		max_energy_points_;
	unsigned int		level_;
	std::string			name_;
	unsigned int		melee_attack_damage_;
	unsigned int		ranged_attack_damage_;
	unsigned int		armor_damage_reduction_;

public:
	FragTrap();
	FragTrap(const std::string &name);
	~FragTrap();
	FragTrap(const FragTrap &ref);
	FragTrap	&operator=(FragTrap const &ref);

	void	init(void);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);

	void	torgueFiesta(std::string const &target);
	void	oneShotWonder(std::string const &target);
	void	laserInferno(std::string const &target);
	void	miniontrap(std::string const &target);
	void	meatUnicycle(std::string const &target);
};

#endif