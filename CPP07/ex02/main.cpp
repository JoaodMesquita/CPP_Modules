#include "Array.hpp"

int	main(void)
{
	Array<int> emptyArray;
	Array<int> array(5);
	Array<int> copyArray(array);

	std::cout << emptyArray.size() << "\n";
	std::cout << array.size() << "\n";
	std::cout << copyArray.size() << "\n";

	return 0;
}