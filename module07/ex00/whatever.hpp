#ifndef WHATEVER_HPP
# define WHATEVER_HPP

namespace whatever
{
	template<typename T>
	void	swap(T &a, T &b)
	{
		T	temp = a;
		a = b;
		b = temp;
	}

	template<typename T>
	T		&min(T &t1, T &t2)
	{
		if (t1 < t2)
			return (t1);
		return (t2);
	}

	template<typename T>
	T		&max(T &t1, T &t2)
	{
		if (t1 > t2)
			return (t1);
		return (t2);
	}
};


#endif