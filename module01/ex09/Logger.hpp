/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:38:45 by hna               #+#    #+#             */
/*   Updated: 2021/01/15 09:53:16 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>

class Logger
{
private:
	std::string		filename;
	void(Logger::*f[2])(std::string const &str);
	void			logToConsole(std::string const &str);
	void			logToFile(std::string const &str);
	std::string		makeLogEntry(std::string const &msg);
public:
	void			log(std::string const & dest, std::string const & message);
	Logger(std::string const &filename);
	~Logger();
};

#endif