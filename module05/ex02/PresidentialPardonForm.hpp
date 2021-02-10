/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:42:00 by hna               #+#    #+#             */
/*   Updated: 2021/02/11 04:42:00 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"
# include <ctime>
# include <cstdlib>

namespace PRESIDENTIAL_PARDON_FORM_CONST
{
	const std::string	NAME = "presidential pardon";
	const int			SIGN_REQ = 72;
	const int			EXEC_REQ = 45;
}

class PresidentialPardonForm : public Form
{
private:
	std::string		target_;

public:
	PresidentialPardonForm(std::string const &target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	void	action() const;

private:
	PresidentialPardonForm();
	PresidentialPardonForm&	operator=(PresidentialPardonForm const &ref);
};

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
	srand(static_cast<unsigned int>(clock()));
	std::cout << "* Drilling noise ... *\n";
	if (rand() % 2)
		std::cout << target_ << " has been robotomized successfully!\n";
	else
		std::cout << target_ << " robotomized failure.\n";
}

#endif