/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 04:44:48 by hna               #+#    #+#             */
/*   Updated: 2021/02/14 04:44:49 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRAL_BUREAUCRACY_HPP
# define CENTRAL_BUREAUCRACY_HPP

# include "OfficeBlock.hpp"

namespace CENTRAL_BUREAUCRACY_CONST
{
	const int			NB_OFFICE = 20;
	const std::string	FORM_TYPE[4] = {"presidential pardon", "robotomy request", "shrubbery creation", "unknown"};
}

typedef struct	s_node
{
	std::string		target;
	struct	s_node	*next;
}				t_node;

class CentralBureaucracy
{
private:
	OfficeBlock		office_[CENTRAL_BUREAUCRACY_CONST::NB_OFFICE];
	Intern			*interns_[CENTRAL_BUREAUCRACY_CONST::NB_OFFICE];
	int				bureaucrat_idx_;

	t_node			*front;
	t_node			*rear;

public:
	class fullOfficeBureaucratException : std::exception
	{
		public:
			const char * what() const throw();
	};

	class emptyQueueException : std::exception
	{
		public:
			const char * what() const throw();
	};

	CentralBureaucracy();
	~CentralBureaucracy();
	void		feed(Bureaucrat &b) throw(fullOfficeBureaucratException);
	void		queueUp(std::string const &target);
	void		doBureaucracy();

private:
	std::string	*pop() throw(emptyQueueException);
};

#endif