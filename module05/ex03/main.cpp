/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:27:38 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 17:55:50 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void	test_intern()
{
	Intern			intern;
	Form*			form;
	Bureaucrat		boss("boss", 3);
	
	std::cout << "========ShrubberyCreationForm Test=======\n";
	form = intern.makeForm("shrubbery creation", "intern_Tree");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << "========PresidentialPardonForm Test=======\n";
	form = intern.makeForm("presidential pardon", "intern_Tree");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << "========RobotomyRequestForm Test=======\n";
	form = intern.makeForm("robotomy request", "intern_Tree");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << "========UnknownForm Test=======\n";
	form = intern.makeForm("sfdfadsf", "intern_Tree");
}

int	main()
{
	test_intern();
	std::cout << "============================================\n";
	return (0);
}