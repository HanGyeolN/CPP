/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:41:54 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 13:59:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static void		outOfBoundCheck(int grade)
{
	if (grade < BUREAUCRAT_CONST::HIGHEST_GRADE)
		throw (Form::GradeTooHighException());
	if (grade > BUREAUCRAT_CONST::LOWEST_GRADE)
		throw (Form::GradeTooLowException());
}

Form::~Form()
{
}

Form::Form(Form const &copy) : 
	name_(copy.name_), grade_sign_(copy.grade_sign_), grade_exec_(copy.grade_exec_), signed_(copy.signed_)
{
	outOfBoundCheck(grade_sign_);
	outOfBoundCheck(grade_exec_);
}

Form::Form(std::string name, int grade_sign, int grade_exec) :
	name_(name), grade_sign_(grade_sign), grade_exec_(grade_exec), signed_(false)
{
	outOfBoundCheck(grade_sign_);
	outOfBoundCheck(grade_exec_);
}

Form&	Form::operator=(Form const &ref)
{
	signed_ = ref.signed_;
	return (*this);
}

std::string		Form::getName() const
{
	return (name_);
}

int				Form::getGradeReqSign() const
{
	return (grade_sign_);
}

int				Form::getGradeReqExec() const
{
	return (grade_exec_);
}

bool			Form::getSigned() const
{
	return (signed_);
}

void			Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() <= grade_sign_)
		signed_ = true;
	else
		throw (Form::GradeTooLowException());
}

void			Form::execute(Bureaucrat const &executor) const
{
	if (!signed_)
		throw (NotSignedException());
	if (executor.getGrade() > grade_exec_)
		throw (GradeTooLowException());
	action();
}

const char* 	Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high.");
}

const char* 	Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low.");
}

const char* 	Form::NotSignedException::what() const throw()
{
	return ("form is not signed.");
}

std::ostream&	operator<<(std::ostream &os, Form &f)
{
	std::cout << "-----------Form------------" << std::endl;
	std::cout << "name: " << f.getName() << std::endl;
	std::cout << "signed: " << f.getSigned() << std::endl;
	std::cout << "required grade to sign: " << f.getGradeReqSign() << std::endl;
	std::cout << "required grade to execute: " << f.getGradeReqExec() << std::endl;
	std::cout << "---------------------------\n";
	return (os);
}