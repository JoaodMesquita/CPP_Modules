#include "iter.hpp"

void	printInt(const int &number)
{
	std::cout << number << "\n";
}

void	printChar(const char &c)
{
	std::cout << c << "\n";
}

void	printDouble(const double &d)
{
	std::cout << d << "\n";
}

void doubleValue(double &number)
{
	number *= 2;
}

void increment(int &number)
{
	number++;
}

int	main(void)
{

	int array[5] = {1, 2 ,3 ,4 ,5};
	char charArray[4] = {'a', 'b', 'c', 'd'};
	double doubleArray[3] = {1.5, 4.75, 10.69};
	const int constArray[5] = {5,4,3,2,1};

	std::cout << "=====Print Int=====\n";
	::iter(array, 5, printInt);

	std::cout << "=====Increment Int=====\n";
	::iter(array, 5, increment);
	::iter(array, 5, printInt);

	std::cout << "=====Print Char=====\n";
	::iter(charArray, 4, printChar);

	std::cout << "=====Print Double=====\n";
	::iter(doubleArray, 3, printDouble);

	std::cout << "=====Double value (double)=====\n";
	::iter(doubleArray, 3, doubleValue);
	::iter(doubleArray, 3, printDouble);

	std::cout << "=====Empty array=====\n";
	::iter(array, 0, printInt);

	std::cout << "=====const array=====\n";
	::iter(constArray, 5, printInt);
	::iter(array, 5, increment); // cant modify values because const var.
	
	return 0;
}