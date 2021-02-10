/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:27:38 by hna               #+#    #+#             */
/*   Updated: 2021/02/11 03:49:38 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

void	test_success()
{
	Form	*form;
	Bureaucrat				boss("boss", 3);
	
	std::cout << "========ShrubberyCreationForm Test=======\n";
	form = new ShrubberyCreationForm("trees");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << "========PresidentialPardonForm Test=======\n";
	form = new PresidentialPardonForm("ppf");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << "========RobotomyRequestForm Test=======\n";
	form = new RobotomyRequestForm("robot");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;
}

void	test_failure()
{
	Form	*form;
	Bureaucrat				boss("boss", 50);
	
	std::cout << "========Not Sign Test=======\n";
	form = new ShrubberyCreationForm("trees");
	boss.executeForm(*form);
	delete form;

	std::cout << "========Low Execute level Test=======\n";
	form = new PresidentialPardonForm("ppf");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << "========Low Sign level Test=======\n";
	form = new RobotomyRequestForm("robot");
	boss.signForm(*form);
	boss.executeForm(*form);
	delete form;
}

int	main()
{
	test_success();
	std::cout << "============================================\n";
	test_failure();
	return (0);
}