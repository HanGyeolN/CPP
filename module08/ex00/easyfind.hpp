#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <map>
# include <algorithm>
# include <exception>

template <typename T>
typename T::iterator		easyfind(T &container, int target)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), target);
	if (iter == container.end())
		throw ("not found.");
	return (iter);
}

template <typename T>
typename std::map<T, T>::iterator			easyfind(std::map<T, T> &container, int target)
{
	typename std::map<T, T>::iterator iter;

	iter = container.find(target);
	if (iter == container.end())
		throw ("not found.");
	return (iter);
}

template <typename T>
typename std::multimap<T, T>::iterator		easyfind(std::multimap<T, T> &container, int target)
{
	typename std::multimap<T, T>::iterator iter;

	iter = container.find(target);
	if (iter == container.end())
		throw ("not found.");
	return (iter);
}

#endif