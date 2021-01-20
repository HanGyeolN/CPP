/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:16:27 by hna               #+#    #+#             */
/*   Updated: 2021/01/17 15:17:00 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					fixed_point;
	static const int	fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	void	operator=(Fixed const &ref);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif