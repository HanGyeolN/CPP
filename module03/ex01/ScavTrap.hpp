/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:57:15 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 06:03:49 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ScavTrap
{
private:
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
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	ScavTrap	&operator=(ScavTrap const &ref);

	void	init(void);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
};

#endif