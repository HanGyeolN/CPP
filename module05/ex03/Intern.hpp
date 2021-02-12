/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 04:45:54 by hna               #+#    #+#             */
/*   Updated: 2021/02/12 14:07:19 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
private:
	std::string		types_[3];
	Form*			(Intern::*create_[3])(std::string const &);
public:
	Intern();
	~Intern();
	Intern(Intern const &copy);
	Intern&		operator=(Intern const &ref);

	Form*		makeForm(std::string const &type, std::string const &target);
	Form*		createPresidentialPardonForm(std::string const &target);
	Form*		createRobotomyRequestForm(std::string const &target);
	Form*		createShrubberyCreationForm(std::string const &target);
};

#endif