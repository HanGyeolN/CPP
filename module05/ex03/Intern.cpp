/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:45:52 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 14:09:09 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	types_[0] = "presidential pardon";
	types_[1] = "robotomy request";
	types_[2] = "shrubbery creation";
	create_[0] = &Intern::createPresidentialPardonForm;
	create_[1] = &Intern::createRobotomyRequestForm;
	create_[2] = &Intern::createShrubberyCreationForm;
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &copy)
{
	for (int i = 0; i < 3; i++)
	{
		types_[i] = copy.types_[i];
		create_[i] = copy.create_[i];
	}
}

Intern&		Intern::operator=(Intern const &ref)
{
	for (int i = 0; i < 3; i++)
	{
		types_[i] = ref.types_[i];
		create_[i] = ref.create_[i];
	}
	return (*this);
}

Form*		Intern::makeForm(std::string const &type, std::string const &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (type == types_[i])
			return (this->*create_[i])(target);
	}
	std::cerr << "requested form " << type << " is not known.\n";
	return (nullptr);
}

Form*		Intern::createPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form*		Intern::createRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form*		Intern::createShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}