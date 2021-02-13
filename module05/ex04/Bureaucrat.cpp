/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:41:44 by hna               #+#    #+#             */
/*   Updated: 2021/02/13 08:31:57 by hna              ###   ########.fr       */
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

Bureaucrat::Bureaucrat(std::string const &name, int grade) throw(GradeTooLowException, GradeTooHighException)
	: name_(name)
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

void		Bureaucrat::increaseGrade() throw(GradeTooHighException)
{
	if (grade_ - 1 < BUREAUCRAT_CONST::HIGHEST_GRADE)
		throw (GradeTooHighException());
	grade_--;
}

void		Bureaucrat::decreaseGrade() throw(GradeTooLowException)
{
	if (grade_ + 1 > BUREAUCRAT_CONST::LOWEST_GRADE)
		throw (GradeTooLowException());
	grade_++;
}

void		Bureaucrat::signForm(Form &form) const throw(Form::GradeTooLowException)
{
	try
	{
		form.beSigned(*this);
		std::cout << name_ << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name_ << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
		throw;
	}
}

void		Bureaucrat::executeForm(Form const &form) const throw(Form::NotSignedException, Form::GradeTooLowException)
{
	try
	{
		form.execute(*this);
		std::cout << name_ << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		throw;
	}
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}