#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
private:
	int				*_arr;
	unsigned int	_capacity;
	unsigned int	_idx;

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