#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> v;

	v.push_back(4);
	v.push_back(8);
	v.push_back(15);
	v.push_back(8);
	v.push_back(23);

	std::cout << "VECTOR\n";

	typename std::vector<int>::iterator it;
	
	for (it = v.begin(); it != v.end(); it++)
	{
		std::cout << "[" << *it << "]";
	}
	std::cout << std::endl;

	std::cout << "====Finding 1st value====\n";
	it = easyfind(v, 4);
	
	if (it != v.end())
		std::cout << "Found: " << *it << std::endl; 
	else
		std::cout << "Not found\n";

	std::cout << "====Finding value in the middle====\n";
	it = easyfind(v, 15);
	
	if (it != v.end())
		std::cout << "Found: " << *it << std::endl; 
	else
		std::cout << "Not found\n";

	std::cout << "====Finding last value====\n";
	it = easyfind(v, 23);
	
	if (it != v.end())
		std::cout << "Found: " << *it << std::endl; 
	else
		std::cout << "Not found\n";
	
	std::cout << "====Duplicated value====\n";
	it = easyfind(v, 8);
	
	if (it != v.end())
	{
		std::cout << "Found 1st occurence: " << *it << std::endl;
		--it; 
		std::cout << "Previous value: " << *it << std::endl;
	}
	else
		std::cout << "Not found\n";

	std::cout << "====Non-existent====\n";
	it = easyfind(v, 99);
	
	if (it != v.end())
		std::cout << "Found: " << *it << std::endl; 
	else
		std::cout << "Not found\n";
	
	std::cout << "\nLIST\n";
	
	std::list<int> l;
	
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	
	std::list<int>::iterator it2 = easyfind(l, 20);

	if (it2 != l.end())
		std::cout << "Found: " << *it2 << std::endl; 
	else
		std::cout << "Not found\n";

	// Non-existent
	std::cout << "====Non-existent====\n";
	it2 = easyfind(l, 69);
	if (it2 != l.end())
		std::cout << "Found: " << *it2 << std::endl; 
	else
		std::cout << "Not found\n";

	std::cout << "\nDEQUE\n";
	
	std::deque<int> d;
	
	d.push_back(110);
	d.push_back(67);
	d.push_back(89);

	std::deque<int>::iterator it3 = easyfind(d, 67);

	if (it3 != d.end())
		std::cout << "Found: " << *it3 << std::endl; 
	else
		std::cout << "Not found\n";

	// Non-existent
	std::cout << "====Non-existent====\n";
	it3 = easyfind(d, 0);
	if (it3 != d.end())
		std::cout << "Found: " << *it3 << std::endl; 
	else
		std::cout << "Not found\n";

	std::cout << "\nEmpty container\n";

	d.clear();

	it3 = easyfind(d, 0);
	if (it3 != d.end())
		std::cout << "Found: " << *it3 << std::endl; 
	else
		std::cout << "Container is empty\n";

	return 0;
}