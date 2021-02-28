#include <iostream>
#include "Span.hpp"
#include <vector>

int		main()
{
	Span	span(10000);

	for (int i = 0; i < 10002; i++)
	{
		try
		{
			span.addNumber(i);
		}
		catch (char const *e)
		{
			std::cout << e << std::endl;
		}
	}
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	return (0);
}