#include "Span.hpp"

int	main(void)
{
	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		/* sp.addNumber(-10);
		sp.addNumber(5);
		sp.addNumber(20); */

		sp.printElements();

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 2: DUPLICATE NUMBERS =====" << std::endl;

	try
	{
		Span sp(4);

		sp.addNumber(10);
		sp.addNumber(10);
		sp.addNumber(20);
		sp.addNumber(30);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 3: ONLY TWO NUMBERS =====" << std::endl;

	try
	{
		Span sp(2);

		sp.addNumber(100);
		sp.addNumber(200);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 4: EMPTY CONTAINER =====" << std::endl;

	try
	{
		Span sp(5);

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 5: ONLY ONE NUMBER =====" << std::endl;

	try
	{
		Span sp(5);

		sp.addNumber(42);

		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 6: CAPACITY EXCEEDED =====" << std::endl;

	try
	{
		Span sp(2);

		sp.addNumber(10);
		sp.addNumber(20);
		sp.addNumber(30);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 7: COPY CONSTRUCTOR =====" << std::endl;

	try
	{
		Span original(3);

		original.addNumber(10);
		original.addNumber(50);
		original.addNumber(100);

		Span copy(original);

		std::cout << "Original:" << std::endl;
		original.printElements();

		std::cout << "Copy:" << std::endl;
		copy.printElements();

		std::cout << "Copy shortest: " << copy.shortestSpan() << std::endl;
		std::cout << "Copy longest: " << copy.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 8: COPY ASSIGNMENT =====" << std::endl;

	try
	{
		Span original(3);
		original.addNumber(5);
		original.addNumber(15);
		original.addNumber(25);

		Span assigned(5);
		assigned = original;

		assigned.printElements();

		std::cout << "Shortest: " << assigned.shortestSpan() << std::endl;
		std::cout << "Longest: " << assigned.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 9: ADD MULTIPLE NUMBERS =====" << std::endl;

		Span multiple(10);

		std::vector<int> numbers;
		numbers.push_back(10);
		numbers.push_back(20);
		numbers.push_back(30);

		multiple.addMultipleNumbers(numbers.begin(), numbers.end());
		multiple.printElements();

	std::cout << "\n===== TEST 10: 10,000 NUMBERS =====" << std::endl;

	try
	{
		Span bigSpan(10000);

		for (int i = 0; i < 10000; i++)
			bigSpan.addNumber(i * 3);

		std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
		std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== TEST 11: ZERO CAPACITY =====" << std::endl;

	try
	{
		Span sp(0);
		sp.addNumber(10);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
