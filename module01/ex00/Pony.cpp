/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 07:52:01 by hna               #+#    #+#             */
/*   Updated: 2021/01/10 07:52:03 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(string name)
{
	this->name = name;
	cout << name << " pony created" << endl;
}

Pony::~Pony()
{
	cout << name << " pony deleted" << endl;
}