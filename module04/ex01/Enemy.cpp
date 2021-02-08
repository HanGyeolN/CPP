/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:10:59 by hna               #+#    #+#             */
/*   Updated: 2021/02/04 16:11:04 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type) : hp_(hp), type_(type)
{
}

Enemy::Enemy(Enemy const &copy)
{
	hp_ = copy.hp_;
	type_ = copy.type_;
}

Enemy	&Enemy::operator=(Enemy const &ref)
{
	hp_ = ref.hp_;
	type_ = ref.type_;
	return (*this);
}

int		Enemy::getHP() const
{
	return (hp_);
}

std::string	Enemy::getType() const
{
	return (type_);
}

void	Enemy::takeDamage(int damage)
{
	hp_ = hp_ - damage;
}