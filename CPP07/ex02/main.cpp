#include "Array.hpp"

int	main(void)
{
	Array<int> emptyArray;
	Array<int> array(5);
	Array<int> copyArray(array);
	
	std::cout << "====Empty Array====\n";
	std::cout << emptyArray.size() << "\n";
	
	std::cout << "====Deep copy====\n";
	std::cout << "original: " << &array << "\n";
	std::cout << "size: " << array.size() << "\n";
	std::cout << "copy: " << &copyArray << "\n";
	std::cout << "size: " << copyArray.size() << "\n";
	
	std::cout << "populating array...\n";
	std:: cout << "Array elements: [ ";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		array[i] = i * 10;
		std::cout << array[i] << " ";
	}
	std:: cout << "]\n";
	
	std:: cout << "copyArray elements: [ ";
	for (unsigned int i = 0; i < copyArray.size(); i++)
		std::cout << copyArray[i] << " ";
	std:: cout << "]\n";

	std::cout << "copying after original array was populated..." << "\n";
	Array<int> copyArray2(array);
	
	std:: cout << "copyArray2 elements: [ ";
	for (unsigned int i = 0; i < copyArray2.size(); i++)
		std::cout << copyArray2[i] << " ";
	std:: cout << "]\n";
	
	

/* 	std::cout << "====Deep copy====\n";
	std::cout << "original: "<< array.size() << "\n";
	std::cout << "copy: " << copyArray.size() << "\n";
	
	std::cout << "====Copy assignement====\n";
	Array<int> array2(7);
	emptyArray = array2;
	std::cout << emptyArray.size() << "\n";
 */
	return 0;
}