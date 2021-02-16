#ifndef NUMERIC_HPP
# define NUMERIC_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Numeric
{
private:
	int				type_;
	std::string		str_;
	char			char_;
	int				int_;
	float			float_;
	double			double_;

	enum
	{
		CharType,
		IntType,
		FloatType,
		DoubleType,
	};

public:
	Numeric(std::string const &str);
	~Numeric();
	Numeric(Numeric const &copy);
	Numeric&	operator=(Numeric const &ref);

private:
	void	convertFromChar(char c);
	void	convertFromInt(int n);
	void	convertFromFloat(float f);
	void	convertFromDouble(double d);
	int		detectType(std::string const &str);
	Numeric();
};
#endif