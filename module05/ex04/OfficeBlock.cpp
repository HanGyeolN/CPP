/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:48:40 by hna               #+#    #+#             */
/*   Updated: 2021/02/13 10:14:03 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : intern_(0), signer_(0), executor_(0)
{
}

OfficeBlock::~OfficeBlock()
{
}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor) :
	intern_(&intern), signer_(&signer), executor_(&executor)
{
}

void	OfficeBlock::setIntern(Intern const &intern)
{
	intern_ = &intern;
}

void	OfficeBlock::setSigner(Bureaucrat const &signer)
{
	signer_ = &signer;
}

void	OfficeBlock::setExecutor(Bureaucrat const &executor)
{
	executor_ = &executor;
}

void	OfficeBlock::doBureaucracy(std::string const &name, std::string const &target) throw(noOfficeMemberException, Form::NotSignedException, Form::GradeTooLowException)
{
	Form	*form;

	form = nullptr;
	if (!intern_ || !signer_ || !executor_)
		throw (noOfficeMemberException(intern_, signer_, executor_));
	try
	{
		form = intern_->makeForm(name, target);
		signer_->signForm(*form);
		executor_->executeForm(*form);
	}
	catch (Intern::UnknownFormException &e)
	{
		e.showReason();
	}
	if (form)
		delete form;
}

OfficeBlock::noOfficeMemberException::noOfficeMemberException(const Intern *intern, const Bureaucrat *signer, const Bureaucrat *executor) :
	intern_(intern), signer_(signer), executor_(executor)
{
}

void	OfficeBlock::noOfficeMemberException::showReason()
{
	std::cout << "There is no ";
	if (!intern_)
	 	std::cout << "Intern ";
	if (!signer_)
		std::cout << "Signer ";
	if (!executor_)
		std::cout << "Executor ";
	std::cout << "in OfficeBlock." << std::endl;
}