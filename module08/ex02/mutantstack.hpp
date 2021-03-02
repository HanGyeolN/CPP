#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename Container::iterator	iterator;

	explicit	MutantStack();
	virtual 	~MutantStack();
	MutantStack(const MutantStack &ref);
	MutantStack&	operator=(const MutantStack &ref);

	iterator		begin();
	const iterator	begin() const;
	iterator		end();
	const iterator	end() const;
};

#endif