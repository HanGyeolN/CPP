/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 05:11:13 by hna               #+#    #+#             */
/*   Updated: 2021/02/14 04:43:40 by hna              ###   ########.fr       */
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
	srand(static_cast<unsigned int>(clock()));
	std::cout << "* Drilling noise ... *\n";
	if (rand() % 2)
		std::cout << target_ << " has been robotomized successfully!\n";
	else
		std::cout << target_ << " robotomized failure.\n";
}