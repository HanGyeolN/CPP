/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:02:53 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 14:34:37 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <system_error>
#include <cerrno>
#include <sstream>

static void		std_in(void)
{
	std::string		buffer;

	while (1)
	{
		getline(std::cin, buffer);
		if (std::cin.eof())
			exit(0);
		std::cout << buffer << std::endl;
	}
}

static void		cat_file(const std::string & filename)
{
	std::ifstream		ifs;
	std::string			str;
	std::stringstream	strStream;

	ifs.open(filename);
	if (ifs.is_open())
	{
		strStream.str("");
		strStream << ifs.rdbuf();
		str = strStream.str();
		std::cout << str;
		ifs.close();
	}
	else
		ifs.exceptions(std::ifstream::badbit | std::ifstream::failbit | std::ifstream::eofbit);
}

int		main(int argc, char **argv)
{
	std::string		buffer;

	if (argc == 1)
		std_in();
	else
	{
		int					i;

		i = 1;
		while (i < argc)
		{
			try
			{
				cat_file(argv[i]);
			}
			catch(...)
			{
				std::cerr << argv[0] << ": " << argv[i] << ": ";
				std::cerr << strerror(errno) << std::endl;
			}
			i++;
		}
	}
	return (0);
}