/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 06:37:22 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 16:52:04 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileException.hpp"
#include "StringException.hpp"
#include <iostream>
#include <fstream>
#include <string>

static void		file_to_string(const std::string &filename, std::string &str)
{
	std::ifstream 	inputfile(filename);
	int				file_size;

	if (inputfile.is_open())
	{
		inputfile.seekg(0, std::ios::end);
		file_size = inputfile.tellg();
		str.resize(file_size);
		inputfile.seekg(0, std::ios::beg);
		inputfile.read(&str[0], file_size);
	}
	else
		throw FileException(filename);
	inputfile.close();
}

static void		replace_string(std::string &str, const std::string &s1, const std::string &s2)
{
	int		begin;

	begin = 0;
	if (s1.length() == 0 || s2.length() == 0)
		throw StringException();
	while (begin < static_cast<int>(str.length()))
	{
		begin = str.find(s1, begin);
		if (begin == -1)
			return ;
		str.replace(begin, s1.length(), s2);
		begin += s1.length();
	}
}

static void		string_to_file(const std::string &str, const std::string filename)
{
	std::ofstream 	write_file(filename);

	write_file.write(str.c_str(), str.size());
	write_file.close();
}

static void		change_file_string(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::string		str;

	try
	{
		file_to_string(filename, str);
		replace_string(str, s1, s2);
		string_to_file(str, filename + ".replace");
	}
	catch(FileException &err)
	{
		err.showExceptionReason();
	}
	catch(StringException &err)
	{
		err.showExceptionReason();
	}
}

int				main(int argc, char **argv)
{
	try
	{
		if (argc != 4)
			throw argc;
		std::string filename = argv[1];
		std::string	s1 = argv[2];
		std::string s2 = argv[3];
		change_file_string(filename, s1, s2);
	}
	catch (int n)
	{
		std::cout << "Invalid argc: " << n << std::endl;
	}
	return (0);
}