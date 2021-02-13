/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:45:54 by hna               #+#    #+#             */
/*   Updated: 2021/02/13 08:41:27 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Intern
{
private:
	std::string		types_[3];
	Form*			(Intern::*create_[3])(std::string const &) const;

public:
	class UnknownFormException
	{
		private:
			std::string	const	&name_;
		public:
			UnknownFormException(std::string const &name);
			void	showReason() const;
	};

	Intern();
	~Intern();
	Intern(Intern const &copy);
	Intern&		operator=(Intern const &ref);

	Form*		makeForm(std::string const &type, std::string const &target) const throw(UnknownFormException);
	Form*		createPresidentialPardonForm(std::string const &target) const;
	Form*		createRobotomyRequestForm(std::string const &target) const;
	Form*		createShrubberyCreationForm(std::string const &target) const;
	
};

#endif