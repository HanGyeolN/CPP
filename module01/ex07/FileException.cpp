/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileException.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:35:10 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 16:35:36 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileException.hpp"

FileException::FileException(const std::string &filename) : filename(filename)
{
}

void	FileException::showExceptionReason() const
{
	std::cout << "Invalid file: " << filename << std::endl;
}