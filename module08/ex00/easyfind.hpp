#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <deque>
# include <list>
# include <map>
# include <set>

template <typename T>
int		easyfind(T &container, int target)
{
	typedef typename T::iterator iterator;

	iterator		iter;
	for (iter = container.begin(); iter != container.end(); iter++)
	{
		if (*iter == target)
			return (*iter);
	}
	return (0);
}

template <typename N>
int		easyfind(std::map<int, N> &container, int target)
{
	typedef typename std::map<int, N>::iterator iterator;

	iterator iter;
	for (iter = container.begin(); iter != container.end(); iter++)
	{
		if (iter->first == target)
			return (iter->first);
	}
	return (0);
}

template <typename N>
int		easyfind(std::multimap<int, N> &container, int target)
{
	typedef typename std::multimap<int, N>::iterator iterator;

	iterator iter;
	for (iter = container.begin(); iter != container.end(); iter++)
	{
		if (iter->first == target)
			return (iter->first);
	}
	return (0);
}


#endif