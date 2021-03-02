#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int capacity) : _capacity(capacity)
{
}

Span::Span(Span const &copy) : _vec(copy._vec), _capacity(copy._capacity)
{
}

Span	&Span::operator=(Span const &copy)
{
	_capacity = copy._capacity;
	_vec = copy._vec;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_vec.size() + 1 > _capacity)
		throw ("span is full.");
	_vec.push_back(num);
}

template <typename T>
void	Span::addNumber(T begin, T end)
{
	while (begin != end)
	{
		_vec.push_back(*begin);
		begin++;
	}
}

int		Span::shortestSpan()
{
	int		min;
	int		before;
	std::vector<int>::iterator	begin;

	if (_vec.size() < 2)
		throw ("not enough span.");
	std::sort(_vec.begin(), _vec.end());
	begin = _vec.begin();
	before = *begin;
	begin++;
	min = *begin - before;
	before = *begin;
	begin++;
	while (begin != _vec.end())
	{
		if ((*begin - before) < min)
			min = (*begin - before);
		before = *begin;
		begin++;
	}
	return (min);
}

int		Span::longestSpan()
{
	int		first;
	int		last;
	std::vector<int>::iterator	begin;

	if (_vec.size() < 2)
		throw ("not enough span.");
	std::sort(_vec.begin(), _vec.end());
	begin = _vec.begin();
	first = *begin;
	while (begin != _vec.end())
	{
		last = *begin;
		begin++;
	}
	return (last - first);
}

Span::~Span()
{
}
