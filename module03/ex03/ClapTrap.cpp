/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:33:19 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 06:21:48 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("default")
{
	std::cout << "ClapTrap Default Constructor Called." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name_(name)
{
	std::cout << "ClapTrap String Constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called." << std::endl;
	hit_points_ = copy.hit_points_;
	max_hit_points_ = copy.max_hit_points_;
	energy_points_ = copy.max_energy_points_;
	max_energy_points_ = copy.max_energy_points_;
	level_ = copy.level_;
	melee_attack_damage_ = copy.melee_attack_damage_;
	ranged_attack_damage_ = copy.ranged_attack_damage_;
	armor_damage_reduction_ = copy.armor_damage_reduction_;
	name_ = copy.name_;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap = operator called." << std::endl;
	hit_points_ = copy.hit_points_;
	max_hit_points_ = copy.max_hit_points_;
	energy_points_ = copy.max_energy_points_;
	max_energy_points_ = copy.max_energy_points_;
	level_ = copy.level_;
	melee_attack_damage_ = copy.melee_attack_damage_;
	ranged_attack_damage_ = copy.ranged_attack_damage_;
	armor_damage_reduction_ = copy.armor_damage_reduction_;
	name_ = copy.name_;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << name_ << " attacks " << target << " at range, causing " << ranged_attack_damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << name_ << " attacks " << target << " at melee, causing " << melee_attack_damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= armor_damage_reduction_;
	if (amount > max_hit_points_)
		amount = max_hit_points_;
	std::cout << name_ << " take damage " << amount << " points of damage!" << std::endl;
	if (amount > hit_points_)
		hit_points_ = 0;
	else
		hit_points_ -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > max_energy_points_)
	{
		amount = max_energy_points_;
		hit_points_ = max_energy_points_;
	}
	else
		hit_points_ += amount;
	std::cout << name_ << " repaired " << amount << " points of energy!" << std::endl;
}