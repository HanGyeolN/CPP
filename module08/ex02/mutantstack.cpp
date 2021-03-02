#include "mutantstack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
}

template < typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
}

template < typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &ref) : std::stack<T, Container>(ref.c)
{
}

template < typename T, typename Container>
MutantStack<T, Container> 	&MutantStack<T, Container>::operator=(const MutantStack<T, Container> &ref)
{
	(*this).c = ref.c;
	return (*this);
}

template < typename T, typename Container>
typename MutantStack<T, Container>::iterator		MutantStack<T, Container>::begin()
{
	return (((*this).c).begin());
}

template < typename T, typename Container>
const typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin() const
{
	return (((*this).c).begin());
}


template < typename T, typename Container>
typename MutantStack<T, Container>::iterator		MutantStack<T, Container>::end()
{
	return (((*this).c).end());
}

template < typename T, typename Container>
const typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end() const
{
	return (((*this).c).end());
}
