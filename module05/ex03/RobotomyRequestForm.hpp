/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:41:57 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 13:31:21 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

namespace ROBOTOMY_REQUEST_FORM_CONST
{
	const std::string	NAME = "robotomy request";
	const int			SIGN_REQ = 25;
	const int			EXEC_REQ = 5;
}

class RobotomyRequestForm : public Form
{
private:
	std::string		target_;

public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	void	action() const;
	
private:
	RobotomyRequestForm();
	RobotomyRequestForm&	operator=(RobotomyRequestForm const &ref);
};

#endif