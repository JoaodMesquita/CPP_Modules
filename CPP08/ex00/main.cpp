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
	return 0;
}