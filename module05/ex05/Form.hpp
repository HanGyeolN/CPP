/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:31:53 by hna               #+#    #+#             */
/*   Updated: 2021/02/13 08:11:27 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string	const	name_;
	int			const	grade_sign_;
	int			const	grade_exec_;
	bool				signed_;

public:
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

	class NotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	virtual ~Form();
	Form(Form const &copy);
	Form(std::string name, int grade_sign, int grade_exec) throw(GradeTooLowException, GradeTooHighException);

	std::string		getName() const;
	int				getGradeReqSign() const;
	int				getGradeReqExec() const;
	bool			getSigned() const;
	void			beSigned(Bureaucrat const &b) throw(GradeTooLowException);
	void			execute(Bureaucrat const &executor) const throw(NotSignedException, GradeTooLowException);
	virtual void	action() const = 0;

private:
	Form();
	Form&	operator=(Form const &ref);
};

std::ostream&	operator<<(std::ostream &os, Form &f);

#endif