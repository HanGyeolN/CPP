/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:27:34 by hna               #+#    #+#             */
/*   Updated: 2021/02/10 22:58:55 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

namespace	BUREAUCRAT_CONST
{
	const int	HIGHEST_GRADE = 1;
	const int	LOWEST_GRADE = 150;
}

class Form;

class Bureaucrat
{
private:
	std::string const	name_;
	int					grade_;
public:
	~Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat&	operator=(Bureaucrat const &ref);

	std::string	getName() const;
	int			getGrade() const;
	void		increaseGrade();
	void		decreaseGrade();
	void		signForm(Form &form) const;

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
	Bureaucrat();
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat& b);

#endif