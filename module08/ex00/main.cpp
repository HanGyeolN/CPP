#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <algorithm>

#include "easyfind.hpp"

int		main(void)
{
	int					ret;
	std::list<int>		a;

	a.push_back(10);
	a.push_back(30);
	a.push_back(-20);
	ret = easyfind(a, 30);
	std::cout << ret << std::endl;

	std::vector<int>	b;
	b.push_back(10);
	b.push_back(30);
	b.push_back(-20);
	ret = easyfind(b, 30);
	std::cout << ret << std::endl;

	std::deque<int>		c;
	c.push_back(10);
	c.push_back(30);
	c.push_back(-20);
	ret = easyfind(c, 30);
	std::cout << ret << std::endl;

	std::set<int>		d;
	d.insert(10);
	d.insert(30);
	d.insert(-20);
	ret = easyfind(d, 30);
	std::cout << ret << std::endl;

	std::multiset<int>	e;
	e.insert(10);
	e.insert(30);
	e.insert(-20);
	ret = easyfind(e, 30);
	std::cout << ret << std::endl;

	std::map<int, int>	f;
	f.insert(std::pair<int, int>(10, 0));
	f.insert(std::pair<int, int>(30, 0));
	f.insert(std::pair<int, int>(-20, 0));
	ret = easyfind(f, 30);
	std::cout << ret << std::endl;

	std::multimap<int, int>	g;
	g.insert(std::pair<int, int>(10, 0));
	g.insert(std::pair<int, int>(30, 0));
	g.insert(std::pair<int, int>(-20, 0));
	ret = easyfind(g, 30);
	std::cout << ret << std::endl;
	return (0);
}