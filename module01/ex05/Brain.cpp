/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 08:06:30 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 19:18:12 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "brain constructed." << std::endl;
}

// Brain::Brain(Brain &brain) : name(brain.name)
// {
// 	std::cout << "copied brain consturcted." << std::endl;
// }

Brain::Brain(const Brain &brain) : name(brain.name)
{
	std::cout << "copied brain consturcted." << std::endl;
}

Brain::~Brain()
{
	std::cout << "brain deconstructed." << std::endl;
}

Brain::Brain(std::string name) : name(name)
{
	std::cout << this->name << " brain constructed." << std::endl;
}

std::string		Brain::identify() const
{
	std::stringstream	ss;
	std::string			str;

	ss << this;
	str = ss.str();
	for (int i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}