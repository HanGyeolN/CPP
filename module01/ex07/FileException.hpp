/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileException.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:34:18 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 16:36:02 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_EXCEPTION_HPP
# define FILE_EXCEPTION_HPP

# include <string>
# include <iostream>

class FileException
{
private:
	const std::string		&filename;
public:
	FileException(const std::string &filename);
	void	showExceptionReason() const;
};

#endif