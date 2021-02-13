/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:45:52 by hna               #+#    #+#             */
/*   Updated: 2021/02/13 08:31:12 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::UnknownFormException::UnknownFormException(std::string const &name) :
	name_(name)
{
}

void	Intern::UnknownFormException::showReason() const
{
	std::cerr << "requested form " << name_ << " is not known.\n";
}

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

Form*		Intern::makeForm(std::string const &type, std::string const &target) const throw(UnknownFormException)
{
	for (int i = 0; i < 3; i++)
	{
		if (type == types_[i])
			return (this->*create_[i])(target);
	}
	throw (UnknownFormException(type));
}

Form*		Intern::createPresidentialPardonForm(std::string const &target) const
{
	return (new PresidentialPardonForm(target));
}

Form*		Intern::createRobotomyRequestForm(std::string const &target) const
{
	return (new RobotomyRequestForm(target));
}

Form*		Intern::createShrubberyCreationForm(std::string const &target) const
{
	return (new ShrubberyCreationForm(target));
}