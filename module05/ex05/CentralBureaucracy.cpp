/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 04:44:56 by hna               #+#    #+#             */
/*   Updated: 2021/02/14 04:44:57 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() :
	bureaucrat_idx_(0)
{
	srand(static_cast<unsigned int>(clock()));
	for (int i = 0; i < CENTRAL_BUREAUCRACY_CONST::NB_OFFICE; i++)
	{
		interns_[i] = new Intern;
		office_[i].setIntern(*interns_[i]);
	}
	front = 0;
	rear = 0;
}

CentralBureaucracy::~CentralBureaucracy()
{
	t_node	*temp;

	while (front)
	{
		temp = front->next;
		delete front;
		front = temp;
	}
	for (int i = 0; i < CENTRAL_BUREAUCRACY_CONST::NB_OFFICE; i++)
	{
		delete interns_[i];
	}
}

void	CentralBureaucracy::feed(Bureaucrat &b) throw(fullOfficeBureaucratException)
{
	int		idx;

	if (bureaucrat_idx_>= CENTRAL_BUREAUCRACY_CONST::NB_OFFICE * 2)
		throw (fullOfficeBureaucratException());
	idx = bureaucrat_idx_ / 2;
	if (bureaucrat_idx_ % 2)
		office_[idx].setExecutor(b);
	else
		office_[idx].setSigner(b);
	bureaucrat_idx_++;
}

void	CentralBureaucracy::queueUp(std::string const &target)
{
	if (rear)
	{
		rear->next = new t_node;
		rear = rear->next;
		rear->target = target;
		rear->next = 0;
	}
	else
	{
		rear = new t_node;
		rear->target = target;
		rear->next = 0;
		front = rear;
	}
}

void	CentralBureaucracy::doBureaucracy()
{
	int				i;
	int				random_form;
	std::string		*target;

	i = 0;
	try
	{
		target = pop();
	}
	catch (emptyQueueException &e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	while (target)
	{
		try
		{
			std::cout << "============================================\n";
			std::cout << "office[" << i << "] do burreaucracy for " << *target << "\n";
			random_form = rand() % 4;
			office_[i].doBureaucracy(CENTRAL_BUREAUCRACY_CONST::FORM_TYPE[random_form], *target);
			target = pop();
			i++;
			if (i == CENTRAL_BUREAUCRACY_CONST::NB_OFFICE)
				i = 0;
		}
		catch (OfficeBlock::noOfficeMemberException &e)
		{
			e.showReason();
			i = 0;
		}
		catch (emptyQueueException &e)
		{
			std::cout << e.what() << std::endl;
			return ;
		}
	}
}

std::string		*CentralBureaucracy::pop() throw(emptyQueueException)
{
	if (front)
	{
		std::string		*ret = &(front->target);
		front = front->next;
		return (ret);
	}
	else
	{
		throw (emptyQueueException());
	}
}

const char *CentralBureaucracy::fullOfficeBureaucratException::what() const throw()
{
	return ("Bureaucraf feed rejected. Office is full.");
}

const char *CentralBureaucracy::emptyQueueException::what() const throw()
{
	return ("target queue is empty.");
}