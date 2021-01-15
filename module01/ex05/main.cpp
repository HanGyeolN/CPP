/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 10:20:26 by hna               #+#    #+#             */
/*   Updated: 2021/01/13 19:00:44 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human		bob;
	const Human	pop;

	std::cout << "=======================" << std::endl;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	std::cout << "-----------------------" << std::endl;
	std::cout << pop.identify() << std::endl;
	std::cout << pop.getBrain().identify() << std::endl;
	std::cout << pop.identify() << std::endl;
	std::cout << pop.getBrain().identify() << std::endl;

	return (0);
}