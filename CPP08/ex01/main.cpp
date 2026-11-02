#include "Span.hpp"

int	main(void)
{
	Span empty;
	Span container(2);
	Span assignment(10);
	Span unsorted(3);

	try
	{
		container.addNumber(10);
		container.addNumber(20);
		container.printElements(); //funcao que printa os elementos do container
		container.addNumber(5);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std:: endl;
	}

	assignment.addNumber(50);
	assignment.addNumber(1000);
	assignment.printElements();
	assignment = container;
	assignment.printElements();
	
	
	unsorted.addNumber(300);
	unsorted.addNumber(500);
	unsorted.addNumber(3);
	unsorted.printElements();

	std::cout << "shortest span: " << unsorted.shortestSpan() << "\n";

	return (0);
}
