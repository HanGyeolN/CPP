#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <string>

#include "easyfind.hpp"

void	test_list()
{
	std::list<int>				container;
	std::list<int>::iterator	iter;

	container.push_back(10);
	container.push_back(30);
	container.push_back(-20);
	try
	{
		iter = easyfind(container, -203);
		std::cout << *iter << std::endl;
	}
	catch(char const *error)
	{
		std::cerr << error << '\n';
	}
}

void	test_vector()
{
	std::vector<int>			container;
	std::vector<int>::iterator	iter;

	container.push_back(10);
	container.push_back(30);
	container.push_back(-20);
	try
	{
		iter = easyfind(container, 30);
		std::cout << *iter << std::endl;
	}
	catch(char const *error)
	{
		std::cerr << error << '\n';
	}
	
}

void	test_deque()
{
	std::deque<int>				container;
	std::deque<int>::iterator	iter;

	container.push_back(10);
	container.push_back(30);
	container.push_back(-20);
	try
	{
		iter = easyfind(container, 10);
		std::cout << *iter << std::endl;
	}
	catch(char const *error)
	{
		std::cerr << error << '\n';
	}
}

void	test_set()
{
	std::set<int>				container;
	std::set<int>::iterator		iter;

	container.insert(10);
	container.insert(30);
	container.insert(-20);
	try
	{
		iter = easyfind(container, 10);
		std::cout << *iter << std::endl;
	}
	catch(char const *error)
	{
		std::cerr << error << '\n';
	}
}

void	test_multiset()
{
	std::multiset<int>				container;
	std::multiset<int>::iterator	iter;

	container.insert(10);
	container.insert(30);
	container.insert(-20);
	try
	{
		iter = easyfind(container, 10);
		std::cout << *iter << std::endl;
	}
	catch(char const *error)
	{
		std::cerr << error << '\n';
	}
}

void	test_map()
{
	std::map<int, int>				container;
	std::map<int, int>::iterator	iter;

	container.insert(std::pair<int, int>(10, 1));
	container.insert(std::pair<int, int>(30, 2));
	container.insert(std::pair<int, int>(-20, 3));
	try
	{
		iter = easyfind(container, 10);
		std::cout << (*iter).first << " : " << (*iter).second << std::endl;
	}
	catch(char const *error)
	{
		std::cerr << error << '\n';
	}
}

void	test_multimap()
{
	std::multimap<int, int>				container;
	std::multimap<int, int>::iterator	iter;

	container.insert(std::pair<int, int>(10, 1));
	container.insert(std::pair<int, int>(30, 2));
	container.insert(std::pair<int, int>(-20, 3));
	try
	{
		iter = easyfind(container, 210);
		std::cout << (*iter).first << " : " << (*iter).second << std::endl;
	}
	catch(char const *error)
	{
		std::cerr << error << '\n';
	}
}

int		main(void)
{
	test_list();

	test_vector();

	test_deque();

	test_set();

	test_multiset();

	test_map();

	test_multimap();
	
	return (0);
}