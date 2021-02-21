/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hna <hna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 04:43:53 by hna               #+#    #+#             */
/*   Updated: 2021/02/22 04:43:58 by hna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include <iostream>
#include <string>

void	intArrayTest()
{
	int			i;
	Array<int>	int_arr(3);

	try 
	{
		int_arr[0] = 42;
		int_arr[1] = 43;
		int_arr[2] = 44;
		i = int_arr[0];
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	emptyIntArrayTest()
{
	int			i;
	Array<int>	empty_int_arr;

	try
	{
		empty_int_arr[0] = 1;
		i = empty_int_arr[0];
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	stringArrayTest()
{
	std::string			i;
	Array<std::string>	str_arr(1);

	try
	{
		str_arr[0] = "hello world";
		i = str_arr[0];
		std::cout << str_arr[0] << std::endl;
		std::cout << "size: " << str_arr.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	operatorTest()
{
	Array<std::string>	arr;
	Array<std::string>	str_arr(2);
	
	str_arr[0] = "aaa";
	str_arr[1] = "bbb";
	arr = str_arr;
	std::cout << arr[0] << arr[1] << std::endl;
}

int		main()
{
	std::cout << "Int Array Test\n";
	intArrayTest();
	std::cout << "Empty Array Test\n";
	emptyIntArrayTest();
	std::cout << "string Array test\n";
	stringArrayTest();
	std::cout << "operator= test\n";
	operatorTest();
	
	return (0);
}