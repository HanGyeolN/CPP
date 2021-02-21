/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 04:44:04 by hna               #+#    #+#             */
/*   Updated: 2021/02/22 04:44:05 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <exception>

template <typename T>
class Array
{
private:
	T				*_arr;
	unsigned int	_len;
public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &copy);
	~Array();
	Array<T>	&operator=(Array<T> const &ref);

	T		&operator[](unsigned int n);
	unsigned int	size();
	class OutOfRangeException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

template <typename T>
Array<T>::Array() : _len(0)
{
	_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : _len(n)
{
	T	*init_value;
	
	init_value = new T();
	_arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
	{
		_arr[i] = *init_value;
	}
	delete init_value;
}

template <typename T>
Array<T>::Array(Array<T> const &copy)
{
	_arr = new T[copy._len];
	_len = copy._len;
	for (unsigned int i = 0; i < copy._len; i++)
		_arr[i] = copy._arr[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <typename T>
Array<T>&	Array<T>::operator=(Array<T> const &ref)
{
	delete[] _arr;
	_arr = new T[ref._len];
	_len = ref._len;
	for (unsigned int i = 0; i < ref._len; i++)
		_arr[i] = ref._arr[i];
	return (*this);
}

template <typename T>
T		&Array<T>::operator[](unsigned int n)
{
	if (n >= _len)
		throw (OutOfRangeException());
	return (_arr[static_cast<unsigned int>(n)]);
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return ("error: index out of range");
}

template <typename T>
unsigned int	Array<T>::size()
{
	return (_len);
}

#endif