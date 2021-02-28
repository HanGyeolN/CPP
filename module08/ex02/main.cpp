#include "mutantstack.cpp"
#include <iostream>
#include <stack>

void	test()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	// std::deque<int>::iterator it = mstack.begin();
	// it.operator=(mstack.begin())
	MutantStack<int>::iterator ite = mstack.end();
	// std::deque<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

int		main(void)
{
	std::deque<int> deq;

	// std::cout << deq.begin();
	// deq.end()
	try
	{
		test();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}