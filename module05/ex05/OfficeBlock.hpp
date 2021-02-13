/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:48:44 by hna               #+#    #+#             */
/*   Updated: 2021/02/14 03:38:07 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK_HPP
# define OFFICE_BLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock
{
private:
	const Intern		*intern_;
	const Bureaucrat	*signer_;
	const Bureaucrat	*executor_;

public:
	class noOfficeMemberException
	{
		private:
			const Intern		*intern_;
			const Bureaucrat	*signer_;
			const Bureaucrat	*executor_;
		public:
			noOfficeMemberException(const Intern *intern, const Bureaucrat *signer, const Bureaucrat *executor);
			void	showReason();
	};

	OfficeBlock();
	virtual ~OfficeBlock();
	OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);
	void	setIntern(Intern const &intern);
	void	setSigner(Bureaucrat const &signer);
	void	setExecutor(Bureaucrat const &executor);
	void	doBureaucracy(std::string const &name, std::string const &target) throw(noOfficeMemberException);

private:
	OfficeBlock(OfficeBlock const &copy);
	OfficeBlock&	operator=(OfficeBlock const &ref);
};

#endif