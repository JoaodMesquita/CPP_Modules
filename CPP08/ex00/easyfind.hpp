#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T> typename T::iterator easyfind(T &c, int find)
{
	typename T::iterator it;

	for (it = c.begin(); it != c.end(); it++)
	{
		if (*it == find)
			return it;
	}
	return c.end();
}

#endif