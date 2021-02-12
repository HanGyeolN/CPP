/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 05:11:13 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 13:31:14 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form(ROBOTOMY_REQUEST_FORM_CONST::NAME, ROBOTOMY_REQUEST_FORM_CONST::SIGN_REQ, ROBOTOMY_REQUEST_FORM_CONST::EXEC_REQ), target_(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
	: Form(copy.getName(), copy.getGradeReqSign(), copy.getGradeReqExec()), target_(copy.target_)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	target_ = ref.target_;
	return (*this);
}

void					RobotomyRequestForm::action() const
{
	std::cout << target_ << " has been pardoned by Zafod Beeblebrox.\n";
}