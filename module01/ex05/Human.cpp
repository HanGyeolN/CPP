/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 10:20:11 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 19:17:02 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain			Human::getBrain()
{
	return (brain);
}

const Brain&	Human::getBrain() const
{
	return (brain);
}

std::string	Human::identify() const
{
	return (brain.identify());
}