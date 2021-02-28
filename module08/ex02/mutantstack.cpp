#include "mutantstack.hpp"

template < typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
}

template < typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
}

template < typename T, typename Container>
bool	MutantStack<T, Container>::empty() const
{
	return (_deque.empty());
}

template < typename T, typename Container>
size_t	MutantStack<T, Container>::size() const
{
	return (_size);
}

template < typename T, typename Container>
T		&MutantStack<T, Container>::top() throw(OutOfBoundException)
{
	if (_size == 0)
		throw (OutOfBoundException());
	return (_deque.back());
}

template < typename T, typename Container>
const T	&MutantStack<T, Container>::top() const throw(OutOfBoundException)
{
	if (_size == 0)
		throw (OutOfBoundException());
	return (_deque.back());
}

template < typename T, typename Container>
void	MutantStack<T, Container>::push(const T &val)
{
	_deque.push_back(val);
	_size++;
}

template < typename T, typename Container>
void	MutantStack<T, Container>::pop() throw(OutOfBoundException)
{
	if (_size == 0)
		throw (OutOfBoundException());
	_deque.pop_back();
	--_size;
}

template < typename T, typename Container>
typename MutantStack<T, Container>::iterator		&MutantStack<T, Container>::begin()
{
	iterator	*ret;

	ret = new iterator(_deque.begin());
	return (*ret);
}

template < typename T, typename Container>
const typename MutantStack<T, Container>::iterator	&MutantStack<T, Container>::begin() const
{
	iterator	*ret;

	ret = new iterator(_deque.begin());
	return (*ret);
}


template < typename T, typename Container>
typename MutantStack<T, Container>::iterator		&MutantStack<T, Container>::end()
{
	iterator	*ret;

	ret = new iterator(_deque.end());
	return (*ret);
}

template < typename T, typename Container>
const typename MutantStack<T, Container>::iterator	&MutantStack<T, Container>::end() const
{
	iterator	*ret;

	ret = new iterator(_deque.end());
	return (*ret);
}

template < typename T, typename Container>
MutantStack<T, Container>::iterator::iterator() : Container::iterator()
{
}

template < typename T, typename Container>
MutantStack<T, Container>::iterator::iterator(typename Container::iterator const &copy) : Container::iterator(copy)
{
}

template < typename T, typename Container>
MutantStack<T, Container>::iterator::~iterator()
{
}

template < typename T, typename Container>
const char * MutantStack<T, Container>::OutOfBoundException::what() const throw()
{
	return ("Out Of Bound");
}

