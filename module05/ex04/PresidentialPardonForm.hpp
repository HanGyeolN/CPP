/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:42:00 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 14:00:11 by hna              ###   ########.fr       */
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

#endif