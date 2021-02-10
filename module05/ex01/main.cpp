/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 05:27:38 by hna               #+#    #+#             */
/*   Updated: 2021/02/11 00:01:03 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	form_outofrange_test()
{
	std::cout << "========form out of range test========\n";
	try
	{
		Form		f1("f1", 0, 3);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form		f2("f2", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	form_test()
{
	Bureaucrat	man("man", 50);
	Form		f1("f1", 10, 1);

	std::cout << "========sign fail test========\n";
	std::cout << f1 << std::endl;
	man.signForm(f1);
	std::cout << f1 << std::endl;

	std::cout << "=======sign success test========\n";

	for (int i = 0; i < 45; i++)
		man.increaseGrade();

	std::cout << f1 << std::endl;
	man.signForm(f1);
	std::cout << f1 << std::endl;
}

int	main()
{
	form_outofrange_test();
	
	form_test();

	return (0);
}