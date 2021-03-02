#include <iostream>
#include <vector>
#include "Span.cpp"

void	basic_test()
{
	Span		span(10);

	span.addNumber(100);
	span.addNumber(0);
	span.addNumber(7);
	span.addNumber(16);
	span.addNumber(-20);
	std::cout << "shortest: "<< span.shortestSpan() << std::endl;
	std::cout << "longest: " << span.longestSpan() << std::endl;

	Span		span_copy(span);
	std::cout << "shortest: "<< span_copy.shortestSpan() << std::endl;
	std::cout << "longest: " << span_copy.longestSpan() << std::endl;

	Span		span_copy2(0);
	span_copy2 = span_copy;
	std::cout << "shortest: "<< span_copy2.shortestSpan() << std::endl;
	std::cout << "longest: " << span_copy2.longestSpan() << std::endl;
}

void	empty_span_test()
{
	try
	{
		Span		span(10);

		span.addNumber(0);
		std::cout << "shortest: "<< span.shortestSpan() << std::endl;
		std::cout << "longest: " << span.longestSpan() << std::endl;
	}
	catch (const char *e)
	{
		std::cerr << e << '\n';
	}
}

void	over_span_test()
{
	try
	{
		Span		span(2);

		span.addNumber(0);
		span.addNumber(1);
		span.addNumber(2);
		std::cout << "shortest: "<< span.shortestSpan() << std::endl;
		std::cout << "longest: " << span.longestSpan() << std::endl;
	}
	catch (const char *e)
	{
		std::cerr << e << '\n';
	}
}

void	span_addnumber_test()
{
	Span				span(100002);
	std::vector<int>	vec;
	
	for (int i = 0; i <= 1000000; i += 10)
		vec.push_back(i);
	vec.push_back(-5);
	
	span.addNumber(vec.begin(), vec.end());
	std::cout << "shortest: "<< span.shortestSpan() << std::endl;
	std::cout << "longest: " << span.longestSpan() << std::endl;
}

int		main()
{
	basic_test();
	std::cout << "=====\n";
	empty_span_test();
	std::cout << "=====\n";
	over_span_test();
	std::cout << "=====\n";
	span_addnumber_test();
	
	return (0);
}