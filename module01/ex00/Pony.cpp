/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 07:52:01 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 16:37:11 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << " pony created" << std::endl;
}

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << name << " pony created" << std::endl;
}

Pony::~Pony()
{
	std::cout << name << " pony deleted" << std::endl;
}

void	Pony::show()
{
	std::cout << "pony: " << this->name << std::endl;
}