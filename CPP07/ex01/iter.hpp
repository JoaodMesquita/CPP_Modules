#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template <typename T, typename F> void iter (T *array, const int length, F function)
{
	if (!array || !length)
	{
		std::cout << "Error: Empty!\n";
		return ;
	}
	for (int i = 0; i < length; i++)
		function(array[i]);
}

#endif