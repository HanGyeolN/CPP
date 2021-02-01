/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:50:26 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 15:50:01 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap(std::string const &name);
	virtual ~ClapTrap();
	ClapTrap	&operator=(ClapTrap const &copy);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif