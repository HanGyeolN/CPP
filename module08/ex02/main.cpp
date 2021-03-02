#include "mutantstack.cpp"
#include <iostream>
#include <list>
#include <stack>

void	basic_test()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	basic_test_list()
{
	std::list<int>	llist;

	llist.push_back(5);
	llist.push_back(17);

	std::cout << llist.back() << std::endl;

	llist.pop_back();

	std::cout << llist.size() << std::endl;

	llist.push_back(3);
	llist.push_back(5);
	llist.push_back(737);
	llist.push_back(0);

	std::list<int>::iterator it = llist.begin();
	std::list<int>::iterator ite = llist.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	operator_test()
{
	MutantStack<int>	mstack;

	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);

	MutantStack<int>::iterator begin = mstack.begin();
	while (begin != mstack.end())
	{
		std::cout << *begin << " ";
		begin++;
	}
	std::cout << '\n';

	MutantStack<int>	mstack_copy;
	mstack_copy = mstack;

	MutantStack<int>::iterator begin2 = mstack_copy.begin();
	while (begin2 != mstack_copy.end())
	{
		std::cout << *begin2 << " ";
		begin2++;
	}
	std::cout << '\n';
}

void	copy_constructor_test()
{
	MutantStack<int>	mstack;

	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);

	MutantStack<int>::iterator begin = mstack.begin();
	while (begin != mstack.end())
	{
		std::cout << *begin << " ";
		begin++;
	}
	std::cout << '\n';

	MutantStack<int>	mstack_copy(mstack);

	MutantStack<int>::iterator begin2 = mstack_copy.begin();
	while (begin2 != mstack_copy.end())
	{
		std::cout << *begin2 << " ";
		begin2++;
	}
	std::cout << '\n';
}

int		main(void)
{
	try
	{
		basic_test();
		std::cout << "====\n";
		basic_test_list();
		std::cout << "====\n";
		operator_test();
		std::cout << "====\n";
		copy_constructor_test();
		std::cout << "====\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}