/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:31:53 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 23:42:28 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string	const	name_;
	int			const	grade_sign_;
	int			const	grade_exec_;
	bool				signed_;
public:
	~Form();
	Form(Form const &copy);
	Form(std::string name, int grade_sign, int grade_exec);

	std::string		getName() const;
	int				getGradeReqSign() const;
	int				getGradeReqExec() const;
	bool			getSigned() const;
	void			beSigned(Bureaucrat const &b);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
private:
	Form();
	Form&	operator=(Form const &ref);
};

std::ostream&	operator<<(std::ostream &os, Form &f);

#endif