/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 07:24:42 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 10:01:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string const &filename) : filename(filename)
{
	this->f[0] = &Logger::logToConsole;
	this->f[1] = &Logger::logToFile;
}

Logger::~Logger()
{
}

std::string		Logger::makeLogEntry(std::string const &msg)
{
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[80];
	std::string	str;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, sizeof(buffer), "[%Y-%m-%d %H:%M:%S] ", timeinfo);
	str = buffer;
	return (str + msg + "\n");
}

void			Logger::logToConsole(std::string const &str)
{
	std::string		log;

	log = makeLogEntry(str);
	std::cout << log;
}

void			Logger::logToFile(std::string const &str)
{
	std::string		log;
	std::ofstream	ofs(this->filename);

	if (ofs.is_open())
	{
		log = makeLogEntry(str);
		ofs.write(&log[0], log.length());
		ofs.close();
	}
	else
		std::cout << "file open error" << std::endl;
}

void			Logger::log(std::string const & dest, std::string const & message)
{
	int		idx;

	idx = static_cast<int>(dest[0]) - '0';
	if (idx >= 0 && idx <= 1)
		(this->*f[idx])(message);
	else
		std::cout << "Invalid dest argument: " << dest << std::endl;
}