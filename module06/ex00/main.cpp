#include "Numeric.hpp"
#include <iostream>

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid argument count.\n";
		return (0);
	}
	
	Numeric	num(argv[1]);
	
	return (0);
}