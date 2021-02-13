/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:27:34 by hna               #+#    #+#             */
/*   Updated: 2021/02/13 08:31:58 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

namespace	BUREAUCRAT_CONST
{
	const int	HIGHEST_GRADE = 1;
	const int	LOWEST_GRADE = 150;
}

class Bureaucrat
{
private:
	std::string const	name_;
	int					grade_;

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

	~Bureaucrat();
	Bureaucrat(std::string const &name, int grade) throw(GradeTooLowException, GradeTooHighException);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat&	operator=(Bureaucrat const &ref);

	std::string	getName() const;
	int			getGrade() const;
	void		increaseGrade() throw(GradeTooHighException);
	void		decreaseGrade() throw(GradeTooLowException);
	void		signForm(Form &form) const throw(Form::GradeTooLowException);
	void		executeForm(Form const &form) const throw(Form::NotSignedException, Form::GradeTooLowException);

private:
	Bureaucrat();
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat& b);

#endif