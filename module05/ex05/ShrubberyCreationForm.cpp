/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 05:11:35 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 13:31:34 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form(SHRUBERRY_CREATION_FORM_CONST::NAME, SHRUBERRY_CREATION_FORM_CONST::SIGN_REQ, SHRUBERRY_CREATION_FORM_CONST::EXEC_REQ), target_(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
	: Form(copy.getName(), copy.getGradeReqSign(), copy.getGradeReqExec()), target_(copy.target_)
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	target_ = ref.target_;
	return (*this);
}

void					ShrubberyCreationForm::action() const
{
	try
	{
		std::ofstream	ofs(target_);
		if (ofs.is_open())
		{
			ofs << SHRUBERRY_CREATION_FORM_CONST::TREE;
		}
		ofs.close();
	}
	catch(std::fstream::failure &e)
	{
		std::cerr << e.what() << std::endl;
	}
}