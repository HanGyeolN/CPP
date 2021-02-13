/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:27:38 by hna               #+#    #+#             */
/*   Updated: 2021/02/14 04:30:56 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <string>

const std::string		get_random_bureaucrat_name()
{
	return ("bb" + std::to_string(rand()));
}

void			test_queue()
{
	CentralBureaucracy	cb;
	Bureaucrat			*bureaucrats[20];

	for (int i = 0; i < 20; i++)
	{
		bureaucrats[i] = new Bureaucrat(get_random_bureaucrat_name(), (rand() % 150) + 1);
		cb.feed(*bureaucrats[i]);
	}
	for (int i = 0; i < 50; i++)
	{
		cb.queueUp("target" + std::to_string(i + 1));
	}
	cb.doBureaucracy();
	for (int i = 0; i < 20; i++)
	{
		delete bureaucrats[i];
	}
}

int	main()
{
	srand(static_cast<unsigned int>(clock()));
	test_queue();
	return (0);
}