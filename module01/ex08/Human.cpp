/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:25:08 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 09:45:18 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(std::string const &name) : name(name)
{
	funcs[0] = &Human::meleeAttack;
	funcs[1] = &Human::rangedAttack;
	funcs[2] = &Human::intimidatingShout;
}

Human::~Human()
{
}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << this->name << " melee attack to " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << this->name << " ranged attack to " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << this->name << " shout to " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	int		funcIdx;

	funcIdx = static_cast<int>(action_name[0]) - '0';
	if (funcIdx >= 0 && funcIdx <= 2)
		(this->*funcs[funcIdx])(target);
	else
		std::cout << "Invalid action_name" << std::endl;
}