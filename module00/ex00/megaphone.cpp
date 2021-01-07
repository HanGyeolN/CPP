#include <iostream>

void	ft_putstr(const char *str)
{
	std::cout << str;
}

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
				std::cout << argv[i][j] + ('A' - 'a');
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
	else
		megaphone(argv);
	return (0);
}