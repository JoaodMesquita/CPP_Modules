#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template <typename T> typename T::iterator easyfind(T &c, int find)
{
	typename T::iterator it = std::find(c.begin(), c.end(), find); // no caso do find falhar, devolve 'container.end()';

	if (it != c.end())
		return it;
	else
		return c.end();
}

#endif