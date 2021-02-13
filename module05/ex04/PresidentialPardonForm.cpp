/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 05:10:51 by hna               #+#    #+#             */
/*   Updated: 2021/02/14 04:42:29 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form(PRESIDENTIAL_PARDON_FORM_CONST::NAME, PRESIDENTIAL_PARDON_FORM_CONST::SIGN_REQ, PRESIDENTIAL_PARDON_FORM_CONST::EXEC_REQ), target_(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
	: Form(copy.getName(), copy.getGradeReqSign(), copy.getGradeReqExec()), target_(copy.target_)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	target_ = ref.target_;
	return (*this);
}

void					PresidentialPardonForm::action() const
{
	std::cout << target_ << " has been pardoned by Zafod Beeblebrox.\n";
}