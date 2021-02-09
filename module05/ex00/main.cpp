#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	b("bob", -10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b("bob", 1500);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b("bob", 140);
		Bureaucrat	c("pop", 1);
		c = b;
		for (int i = 0; i < 20; i++)
		{
			c.decreaseGrade();
			std::cout << c;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b("bob", 10);
		Bureaucrat	c(b);
		for (int i = 0; i < 20; i++)
		{
			c.increaseGrade();
			std::cout << c;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}