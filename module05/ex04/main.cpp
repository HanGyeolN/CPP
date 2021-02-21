/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:27:38 by hna               #+#    #+#             */
/*   Updated: 2021/02/15 22:03:05 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

void	test_intern()
{
	Intern		idiotOne;
	Bureaucrat	hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat	bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;

	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);

	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
		std::cout << "============================================\n";
		ob.doBureaucracy("presidential pardon", "Pigley");
	}
	catch (OfficeBlock::noOfficeMemberException & e)
	{
		e.showReason();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test_intern2()
{
	Intern		idiotOne;
	Bureaucrat	hermes = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat	bob = Bureaucrat("Bobby Bobson", 1);
	OfficeBlock ob;

	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);

	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
		std::cout << "============================================\n";
		ob.doBureaucracy("presidential pardon", "Pigley");
	}
	catch (OfficeBlock::noOfficeMemberException & e)
	{
		e.showReason();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test_intern3()
{
	Intern		idiotOne;
	Bureaucrat	hermes = Bureaucrat("Hermes Conrad", 1);
	Bureaucrat	bob = Bureaucrat("Bobby Bobson", 1);
	OfficeBlock ob;

	ob.setIntern(idiotOne);
	// ob.setSigner(bob);
	// ob.setExecutor(hermes);

	ob.doBureaucracy("robotomy request", "Pigley");
	std::cout << "============================================\n";
	ob.doBureaucracy("presidential pardon", "Pigley");
	
}

int	main()
{
	test_intern();
	std::cout << "============================================\n";
	test_intern2();
	std::cout << "============================================\n";
	test_intern3();
	return (0);
}