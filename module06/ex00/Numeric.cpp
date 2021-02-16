#include "Numeric.hpp"

static int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		Numeric::detectType(std::string const &str)
{
	if (str.length() == 1 && !isnumber(str[0]))
		return (CharType);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			if (str[str.length() - 1] == 'f')
			{
				std::cout << std::fixed << std::setprecision(str.length() - 1 - i - 1);
				return (FloatType);
			}
			std::cout << std::fixed << std::setprecision(str.length() - 1 - i);
			return (DoubleType);
		}
	}
	if (str == "nan" || str == "-inf" || str == "+inf")
		return (DoubleType);
	if (str == "nanf" || str == "-inff" || str == "+inff")
		return (FloatType);
	return (IntType);
}

void	Numeric::convertFromChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	Numeric::convertFromInt(int n)
{
	if (!is_printable(static_cast<char>(n)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void	Numeric::convertFromFloat(float f)
{
	if (f == std::numeric_limits<float>::quiet_NaN())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (!is_printable(static_cast<char>(f)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	Numeric::convertFromDouble(double d)
{
	if (d == std::numeric_limits<double>::quiet_NaN())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (!is_printable(static_cast<char>(d)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
	
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

Numeric::Numeric(std::string const &str)
{
	std::cout << std::fixed << std::setprecision(1);
	type_ = detectType(str);
	try
	{
		if (type_ == CharType)
		{
			char_ = str[0];
			convertFromChar(char_);
		}
		else if (type_ == IntType)
		{
			int_ = std::stoi(str);
			convertFromInt(int_);
		}
		else if (type_ == FloatType)
		{
			float_ = std::stof(str);
			convertFromFloat(float_);
		}
		else if (type_ == DoubleType)
		{
			double_ = std::stod(str);
			convertFromDouble(double_);
		}
	}
	catch (...)
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
}

Numeric::Numeric(Numeric const &copy) :
	type_(copy.type_), char_(copy.char_), int_(copy.int_), float_(copy.float_), double_(copy.double_)
{
}

Numeric::~Numeric()
{}

Numeric&	Numeric::operator=(Numeric const &ref)
{
	type_ = ref.type_;
	char_ = ref.char_;
	int_ = ref.int_;
	float_ = ref.float_;
	double_ = ref.double_;
	return (*this);
}
