#include <iostream>

int		megaphone(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout << (char)(argv[i][j] - 32);
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		megaphone(argv);
	std::cout << "\n";
	return (0);
}