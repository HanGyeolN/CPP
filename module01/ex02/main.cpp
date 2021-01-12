/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 04:13:48 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 14:38:32 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void	get_command(string &cmd)
{
	getline(cin, cmd);
	if (!cin)
		exit(0);
}

void	prolog(void)
{
	Zombie			zombie;
	ZombieEvent		event;

	zombie.announce();
	cout << "player attack!" << endl;
	event.attack(zombie);
}

void	battle(void)
{
	Zombie			*zombie;
	ZombieEvent		event;
	string			cmd;

	event.setZombieType("lv10");
	zombie = event.randomChump();
	while (1)
	{
		cout << "1: attack	2: exit" << endl;
		get_command(cmd);
		if (cmd.compare("1") == 0)
		{
			event.attack(*zombie);
			delete zombie;
			get_command(cmd);
			zombie = event.randomChump();
		}
		else if (cmd.compare("2") == 0)
		{
			delete zombie;
			return ;
		}
	}
}

int		main(void)
{
	string	command;

	srand((unsigned int)clock());
	prolog();
	get_command(command);
	battle();
	return (0);
}