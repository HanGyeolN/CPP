#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	value = (num << this->fractional_bits);
}

Fixed::Fixed(const float point)
{
	float	ret;

	std::cout << "Float constructor called" << std::endl;
	ret = point;
	ret = ret * (1 << this->fractional_bits);
	this->value = static_cast<int>(roundf(ret));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(fixed);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(Fixed const &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = ref.getRawBits();
}

int		Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	float	ret;
	int		i;

	i = 0;
	ret = static_cast<float>(this->value);
	while (i < this->fractional_bits)
	{
		ret = ret / 2;
		i++;
	}
	return (ret);
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->fractional_bits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}