#include <iostream>
#include <string>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int		n;

	n = rand() % 3;
	std::cout << static_cast<char>('A' + n) << std::endl;
	if (n == 0)
		return (new A);
	else if (n == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cout << "\n";
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(&p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(&p))
		std::cout << "C\n";
	else
		std::cout << "\n";
}

int		main()
{
	srand(static_cast<unsigned int>(clock()));

	for (int i = 0; i < 10; i++)
	{
		Base	*b = generate();
		identify_from_pointer(b);
		identify_from_reference(*b);
		std::cout << "==================" << std::endl;
		delete b;
	}
	return (0);
}