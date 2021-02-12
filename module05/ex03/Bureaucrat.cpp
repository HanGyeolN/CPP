/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:41:44 by hna               #+#    #+#             */
/*   Updated: 2021/02/11 04:41:45 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high.");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low.");
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name_(name)
{
	if (grade < BUREAUCRAT_CONST::HIGHEST_GRADE)
		throw (GradeTooHighException());
	if (grade > BUREAUCRAT_CONST::LOWEST_GRADE)
		throw (GradeTooLowException());
	grade_ = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name_(copy.name_), grade_(copy.grade_)
{
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &ref)
{
	grade_ = ref.grade_;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (name_);
}

int			Bureaucrat::getGrade() const
{
	return (grade_);
}

void		Bureaucrat::increaseGrade()
{
	if (grade_ - 1 < BUREAUCRAT_CONST::HIGHEST_GRADE)
		throw (GradeTooHighException());
	grade_--;
}

void		Bureaucrat::decreaseGrade()
{
	if (grade_ + 1 > BUREAUCRAT_CONST::LOWEST_GRADE)
		throw (GradeTooLowException());
	grade_++;
}

void		Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << name_ << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name_ << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << name_ << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}