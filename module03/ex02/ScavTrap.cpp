/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:47:27 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 06:24:38 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::string		challenges[4] = 
{
	"kill them all",
	"repair me",
	"melee attack challenge",
	"range attack challenge"
};

void	ScavTrap::init()
{
	hit_points_ = 100;
	max_hit_points_ = 100;
	energy_points_ = 50;
	max_energy_points_ = 50;
	level_ = 1;
	melee_attack_damage_ = 20;
	ranged_attack_damage_ = 15;
	armor_damage_reduction_ = 3;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called." << std::endl;
	init();
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap String Constructor called." << std::endl;
	init();
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &ref)
{
	std::cout << "Scavtrap = operator called." << std::endl;
	hit_points_ = ref.hit_points_;
	max_hit_points_ = ref.max_hit_points_;
	energy_points_ = ref.energy_points_;
	max_energy_points_ = ref.max_energy_points_;
	level_ = ref.level_;
	melee_attack_damage_ = ref.melee_attack_damage_;
	ranged_attack_damage_ = ref.ranged_attack_damage_;
	armor_damage_reduction_ = ref.armor_damage_reduction_;
	name_ = ref.name_;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "copy ScavTrap constructor called." << std::endl;
	hit_points_ = ref.hit_points_;
	max_hit_points_ = ref.max_hit_points_;
	energy_points_ = ref.energy_points_;
	max_energy_points_ = ref.max_energy_points_;
	level_ = ref.level_;
	melee_attack_damage_ = ref.melee_attack_damage_;
	ranged_attack_damage_ = ref.ranged_attack_damage_;
	armor_damage_reduction_ = ref.armor_damage_reduction_;
	name_ = ref.name_;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SCAV-TP ";
	ClapTrap::rangedAttack(target);
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SCAV-TP ";
	ClapTrap::meleeAttack(target);
}

void	ScavTrap::challengeNewcomer()
{
	int		random_number;

	if (energy_points_ < 25)
	{
		std::cout << "Not enough energy." << std::endl;
		return ;
	}
	random_number = (rand() % 4);
	std::cout << challenges[random_number] << std::endl;
	energy_points_ -= 25;
}
