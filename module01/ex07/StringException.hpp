/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringException.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:36:55 by hna               #+#    #+#             */
/*   Updated: 2021/01/14 16:37:39 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_EXCEPTION_HPP
# define STRING_EXCEPTION_HPP

# include <string>
# include <iostream>

class StringException
{
public:
	void	showExceptionReason() const;
};

#endif