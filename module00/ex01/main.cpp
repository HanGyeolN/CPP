/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 04:07:26 by hna               #+#    #+#             */
/*   Updated: 2021/01/12 04:07:27 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int		get_command(string &command)
{
	cout << "input command: ";
	getline(cin, command);
	if(!std::cin)
	{
		if(std::cin.eof())
		{
			std::cout << "EOF\n";
			return (0);
		}
		else
			std::cout << "other failure\n";
	}
	return (1);
}

int		error(string str, int ret)
{
	cout << str;
	return (ret);
}

int main(void)
{
	string		command;
	Phonebook	pb;

	pb.print_header();
	while (1)
	{
		if (!get_command(command))
			return (1);
		if (command.compare("ADD") == 0)
		{
			if (!pb.add_contact())
				return (1);
		}
		else if (command.compare("SEARCH") == 0)
		{
			pb.search_contact();
		}
		else if (command.compare("EXIT") == 0)
			break;
		else
			error("usage: ADD SEARCH EXIT\n", 0);
	}
	return (0);
}