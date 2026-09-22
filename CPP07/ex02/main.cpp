#define MAX_VAL 750
#include "Array.hpp"
#include <cstdlib>

int	main(void)
{
	Array<int> emptyArray;
	Array<int> array(5);
	Array<int> copyArray(array);
	
	std::cout << "====EMPTY ARRAY====\n";
	std::cout << emptyArray.size() << "\n";
	
	std::cout << "====DEEP COPY====\n\n";
	std::cout << "original: " << &array << "\n";
	std::cout << "size: " << array.size() << "\n";
	std::cout << "copy: " << &copyArray << "\n";
	std::cout << "size: " << copyArray.size() << "\n";
	
	std::cout << "\npopulating array...\n\n";
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

	std::cout << "\n====COPY ASSIGNMENT====\n" << "\n";
	Array<std::string> mcdonalds(3);
	mcdonalds[0] = "CHEESEBURGER";
	mcdonalds[1] = "CBO"; 
	mcdonalds[2] = "MCROYAL BACON";

	std:: cout << "mcdonalds elements: [ ";
	for (unsigned int i = 0; i < mcdonalds.size(); i++)
		std::cout << mcdonalds[i] << " ";
	std:: cout << "]\n";

	Array<std::string> mcdonaldsCopy;

	mcdonaldsCopy = mcdonalds;

	std:: cout << "mcdonaldsCopy elements: [ ";
	for (unsigned int i = 0; i < mcdonalds.size(); i++)
		std::cout << mcdonalds[i] << " ";
	std:: cout << "]\n";

	std:: cout << "original: "<< &mcdonalds << "\n";
	std:: cout << "copy: " << &mcdonaldsCopy << "\n";

	std::cout << "\n====SUBSCRIPT OPERATOR====" << "\n";
	std::cout << copyArray2[4] << "\n";

	std::cout << "====Out of bounds test====" << "\n";
	try
	{
		copyArray2[-2] = 100;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	//std::cout << ===Subject Main=== << "\n";
    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;

	return 0;
}