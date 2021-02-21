#include "iter.hpp"
#include <iostream>

void	add_one(const int &n)
{
	std::cout << n + 1 << std::endl;
}

void	add_str(const std::string &str)
{
	std::cout << str + "42" << std::endl; 
}

int		main(void)
{
	int		arr[5] = {1,2,3,4,5};
	std::string	str[5] = {"a", "b", "c", "d", "e"};
	
	iter(arr, 5, &add_one);
	iter(str, 5, &add_str);
	return (0);
}