/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:09:24 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:09:30 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
}

Character::Character(Character const &copy)
{
	name_ = copy.name_;
	ap_ = copy.ap_;
	weapon_ = copy.weapon_;
}

Character::Character(std::string const &name)
{
	name_ = name;
	ap_ = CHARACTER_CONST::INIT_AP;
	weapon_ = NULL;
}

Character		&Character::operator=(Character const &ref)
{
	name_ = ref.name_;
	ap_ = ref.ap_;
	weapon_ = ref.weapon_;
	return (*this);
}

void			Character::recoverAP()
{
	if (ap_ + 10 > CHARACTER_CONST::MAX_AP)
		ap_ = CHARACTER_CONST::MAX_AP;
	else
		ap_ += 10;
}

void			Character::equip(AWeapon *weapon)
{
	weapon_ = weapon;
}

void			Character::attack(Enemy *enemy)
{
	if (weapon_ == NULL || !enemy)
		return ;
	if (ap_ - weapon_->getAPCost() < 0)
		return ;
	ap_ -= weapon_->getAPCost();
	std::cout << name_ << " attacks " << enemy->getType() << " with a " << weapon_->getName() << std::endl;
	weapon_->attack();
	if (enemy->getHP() - weapon_->getDamage() <= 0)
	{
		delete enemy;
	}
	else
		enemy->takeDamage(weapon_->getDamage());
}

std::string		Character::getName() const
{
	return (name_);
}

int				Character::getAP() const
{
	return (ap_);
}

AWeapon			*Character::getWeapon() const
{
	return (weapon_);
}

std::ostream	&operator<<(std::ostream &os, Character &character)
{
	if (character.getWeapon() == NULL)
		std::cout << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	else
		std::cout << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	return (os);
}