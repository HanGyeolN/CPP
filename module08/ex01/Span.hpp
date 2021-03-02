#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
private:
	std::vector<int>		_vec;
	unsigned int			_capacity;

public:
	Span(unsigned int capacity);
	Span(Span const &copy);
	~Span();
	Span	&operator=(Span const &copy);
	void	addNumber(int num);
	template <typename T>
	void	addNumber(T begin, T end);
	int		shortestSpan();
	int		longestSpan();

private:
	Span();
};

#endif