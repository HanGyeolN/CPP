#include "whatever.hpp"
#include <iostream>
#include <string>

void swap1()
{
	int a = 3, b = 4;
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	whatever::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
}

void swap2()
{
	float a = 0.3, b = -0.5;
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	whatever::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
}

void swap3()
{
	char a = 'p', b = 'z';
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	whatever::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
}

void swap4()
{
	std::string a = "0000", b = "1111";
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	whatever::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
}

int		main(void)
{
	int			i1 = 3;
	int			i2 = 4;
	float		f1 = 0.3;
	float		f2 = -0.4;
	char		c1 = 'p';
	char		c2 = 'z';
	std::string	s1 = "0000";
	std::string	s2 = "1111";

	std::cout << "\n======min test======\n";
	std::cout << "min(" << i1 << ", " << i2 << ") : " << whatever::min(i1, i2) << std::endl;
	std::cout << "min(" << f1 << ", " << f2 << ") : " << whatever::min(f1, f2) << std::endl;
	std::cout << "min(" << c1 << ", " << c2 << ") : " << whatever::min(c1, c2) << std::endl;
	std::cout << "min(" << s1 << ", " << s2 << ") : " << whatever::min(s1, s2) << std::endl;

	std::cout << "\n======max test======\n";
	std::cout << "max(" << i1 << ", " << i2 << ") : " << whatever::max(i1, i2) << std::endl;
	std::cout << "max(" << f1 << ", " << f2 << ") : " << whatever::max(f1, f2) << std::endl;
	std::cout << "max(" << c1 << ", " << c2 << ") : " << whatever::max(c1, c2) << std::endl;
	std::cout << "max(" << s1 << ", " << s2 << ") : " << whatever::max(s1, s2) << std::endl;

	std::cout << "\n=====swap test======\n";
	std::cout << "i1: " << i1 << ", i2: " << i2 << "\n";
	whatever::swap(i1, i2);
	std::cout << "i1: " << i1 << ", i2: " << i2 << "\n\n" ;

	std::cout << "f1: " << f1 << ", f2: " << f2 << "\n";
	whatever::swap(f1, f2);
	std::cout << "f1: " << f1 << ", f2: " << f2 << "\n\n" ;

	std::cout << "c1: " << c1 << ", c2: " << c2 << "\n";
	whatever::swap(c1, c2);
	std::cout << "c1: " << c1 << ", c2: " << c2 << "\n\n" ;

	std::cout << "s1: " << s1 << ", s2: " << s2 << "\n";
	whatever::swap(s1, s2);
	std::cout << "s1: " << s1 << ", s2: " << s2 << "\n\n" ;

	return (0);
}