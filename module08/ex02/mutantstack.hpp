#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	class	OutOfBoundException : public std::exception
	{
		const char * what() const throw();
	};

	explicit MutantStack();
	~MutantStack();

	bool				empty() const;
	size_t				size() const;
	T					&top() throw(OutOfBoundException);
	const T				&top() const throw(OutOfBoundException);
	void				push(const T& val);
	void				pop() throw(OutOfBoundException);
	iterator			&begin();
	const iterator		&begin() const;
	iterator			&end();
	const iterator		&end() const;
};

#endif