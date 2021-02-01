/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:09:56 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 16:09:57 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

void	SuperTrap::init()
{
	energy_points_ = 120;
	max_energy_points_ = 120;
	melee_attack_damage_ = 60;
	hit_points_ = 100;
	max_hit_points_ = 100;
	level_ = 1;
	ranged_attack_damage_ = 20;
	armor_damage_reduction_ = 5;
	skills[0] = &FragTrap::torgueFiesta;
	skills[1] = &FragTrap::oneShotWonder;
	skills[2] = &FragTrap::laserInferno;
	skills[3] = &FragTrap::miniontrap;
	skills[4] = &FragTrap::meatUnicycle;
}

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "SuperTrap Default Consturctor called." << std::endl;
	init();
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap String Consturctor called." << std::endl;
	init();
}

SuperTrap::SuperTrap(SuperTrap const &copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy)
{
	std::cout << "SuperTrap Copy Constructor called." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called." << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &copy)
{
	std::cout << "SuperTrap = operator called." << std::endl;
	FragTrap::operator=(copy);
	NinjaTrap::operator=(copy);
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}