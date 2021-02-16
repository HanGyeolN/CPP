#include <string>
#include <iostream>

struct Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

char	rand_alnum()
{
	int		n;

	n = rand() % 3;
	if (n == 0)
		return ('0' + rand() % 10);
	else if (n == 1)
		return ('a' + rand() % 26);
	else
		return ('A' + rand() % 26);
}

void	*serialize(void)
{
	Data		*raw;

	raw = new  Data;
	for (int i = 0; i < 8; i++)
	{
		raw->s1 += rand_alnum();
		raw->s2 += rand_alnum();
	}
	raw->n = rand();
	std::cout << raw->s1 << "\n" << raw->n << "\n" << raw->s2 << std::endl;
	return (reinterpret_cast<void *>(raw));
}

Data	*deserialized(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int		main()
{
	void	*raw;
	Data	*data;

	srand(static_cast<unsigned int>(clock()));
	raw = serialize();
	std::cout << "\n";
	data = deserialized(raw);
	std::cout << data->s1 << "\n" << data->n << "\n" << data->s2 << std::endl;
	delete data;
	return (0);
}