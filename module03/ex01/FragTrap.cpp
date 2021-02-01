/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:51:09 by hna               #+#    #+#             */
/*   Updated: 2021/02/01 05:55:32 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::init()
{
	hit_points_ = 100;
	max_hit_points_ = 100;
	energy_points_ = 100;
	max_energy_points_ = 100;
	level_ = 1;
	melee_attack_damage_ = 30;
	ranged_attack_damage_ = 20;
	armor_damage_reduction_ = 5;
	skills[0] = &FragTrap::torgueFiesta;
	skills[1] = &FragTrap::oneShotWonder;
	skills[2] = &FragTrap::laserInferno;
	skills[3] = &FragTrap::miniontrap;
	skills[4] = &FragTrap::meatUnicycle;
}

FragTrap::FragTrap() : name_("default")
{
	std::cout << "FragTrap Default Constructor called." << std::endl;
	init();
}

FragTrap::FragTrap(const std::string &name) : name_(name)
{
	std::cout << "FragTrap String Constructor called." << std::endl;
	init();
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "FragTrap Copy Constructor called." << std::endl;
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

FragTrap	&FragTrap::operator=(FragTrap const &ref)
{
	std::cout << "FragTrap = operator called." << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name_ << " attacks " << target << " at range, causing " << ranged_attack_damage_ << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << name_ << " attacks " << target << " at melee, causing " << melee_attack_damage_ << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount -= armor_damage_reduction_;
	if (amount > max_hit_points_)
		amount = max_hit_points_;
	std::cout << "FR4G-TP " << name_ << " take damage " << amount << " points of damage!" << std::endl;
	if (amount > hit_points_)
		hit_points_ = 0;
	else
		hit_points_ -= amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount > max_energy_points_)
	{
		amount = max_energy_points_;
		hit_points_ = max_energy_points_;
	}
	else
		hit_points_ += amount;
	std::cout << "FR4G-TP " << name_ << " repaired " << amount << " points of energy!" << std::endl;
}

void	FragTrap::torgueFiesta(std::string const &target)
{
	std::cout << "Kick Him While He's Down!" << std::endl;
	rangedAttack(target);
	rangedAttack(target);
	rangedAttack(target);
}

void	FragTrap::oneShotWonder(std::string const &target)
{
	std::cout << "You're... GOING TO LOVE ME!!" << std::endl;
	rangedAttack(target);
}

void	FragTrap::laserInferno(std::string const &target)
{
	std::cout << "I Am Rubber, You Are Glue" << std::endl;
	rangedAttack(target);
}

void	FragTrap::miniontrap(std::string const &target)
{
	std::cout << "Livin' Near the Edge" << std::endl;
	meleeAttack(target);
}

void	FragTrap::meatUnicycle(std::string const &target)
{
	std::cout << "Tripleclocked" << std::endl;
	meleeAttack(target);
	meleeAttack(target);
	meleeAttack(target);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		random_number;

	if (energy_points_ < 25)
	{
		std::cout << "Not enough energy." << std::endl;
		return ;
	}
	random_number = (rand() % 5);
	(this->*skills[random_number])(target);
	energy_points_ -= 25;
}