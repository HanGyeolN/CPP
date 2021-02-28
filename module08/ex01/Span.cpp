#include "Span.hpp"
#include <vector>

int	ft_abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

Span::Span(unsigned int capacity) : _arr(0), _capacity(capacity), _idx(0)
{
	_arr = new int[capacity];
}

Span::Span(Span const &copy) : _arr(0), _capacity(copy._capacity), _idx(copy._idx)
{
	_arr = new int[_capacity];
	for (unsigned int i = 0; i < _capacity; i++)
		_arr[i] = copy._arr[i];
}

Span	&Span::operator=(Span const &copy)
{
	if (_arr)
		delete[] _arr;
	_capacity = copy._capacity;
	_arr = new int[_capacity];
	for (unsigned int i = 0; i < _capacity; i++)
		_arr[i] = copy._arr[i];
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_idx > _capacity )
		throw ("error");
	_arr[_idx] = num;
	_idx++;
}

template <typename T>
void	Span::addNumber(T begin, T end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}

int		Span::shortestSpan()
{
	int		min;
	int		range;

	if (_idx < 2)
		throw ("not enough span");
	min = ft_abs(_arr[1] - _arr[0]);
	if (_idx == 2)
		return (min);
	for (unsigned int i = 1; i < _idx - 1; i++)
	{
		for (unsigned int j = i + 1; j < _idx; j++)
		{
			range = ft_abs(_arr[i] - _arr[j]);
			if (range < min)
				min = range;
		}
	}
	return (min);
}

int		Span::longestSpan()
{
	int		max;
	int		range;

	if (_idx < 2)
		throw ("not enough span");
	max = ft_abs(_arr[1] - _arr[0]);
	if (_idx == 2)
		return (max);
	for (unsigned int i = 0; i < _idx - 1; i++)
	{
		for (unsigned int j = i + 1; j < _idx; j++)
		{
			range = ft_abs(_arr[i] - _arr[j]);
			if (range > max)
				max = range;
		}
	}
	return (max);
}

Span::~Span()
{
	if (_arr)
		delete[] _arr;
}
