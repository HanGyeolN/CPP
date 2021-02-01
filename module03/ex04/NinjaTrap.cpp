/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:16:28 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 06:51:03 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void	NinjaTrap::init()
{
	hit_points_ = 60;
	max_hit_points_ = 60;
	energy_points_ = 120;
	max_energy_points_ = 120;
	level_ = 1;
	melee_attack_damage_ = 60;
	ranged_attack_damage_ = 5;
	armor_damage_reduction_ = 0;
}

NinjaTrap::NinjaTrap() : ClapTrap()
{
	
	std::cout << "NinjaTrap Default Constructor called." << std::endl;
	init();
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "NinjaTrap String Constructor called." << std::endl;
	init();
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy) : ClapTrap(copy)
{
	std::cout << "NinjaTrap Copy Constructor called." << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &copy)
{
	std::cout << "NinjaTrap Operator = called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NINJA-TP ";
	ClapTrap::rangedAttack(target);
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJA-TP ";
	ClapTrap::meleeAttack(target);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	rangedAttack("CLAP TRAP");
	target.takeDamage(ranged_attack_damage_);
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	rangedAttack("FRAG TRAP");
	target.takeDamage(ranged_attack_damage_);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	rangedAttack("SCAV TRAP");
	target.takeDamage(ranged_attack_damage_);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	rangedAttack("NINJA TRAP");
	target.takeDamage(ranged_attack_damage_);
}