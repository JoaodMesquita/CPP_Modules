#include "Bureaucrat.hpp"

int main (void)
{

	//Copy constructor 
	Bureaucrat a ("joao", 4);
	Bureaucrat b (a);

	std::cout << "A: "<< a << std::endl;
	std::cout << "B: "<< b << std::endl;

	//Assignment operator
	Bureaucrat c ("Ana", 150);
	Bureaucrat d ("Manel", 50);

	d = c;

	std::cout << "C: "<< c << std::endl;
	std::cout << "D: "<< d << std::endl;

/* 	try{
		Bureaucrat a ("A", 13);
		Bureaucrat copy("Copy", 0);
	
		copy = a;
	
		std::cout << a << std::endl;
		std::cout << copy << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught an exception: " << e.what();
	} */

	/* try{
		
		Bureaucrat don ("Don Cornelius", 151);
		std::cout << don << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught an exception: " << e.what();
	}
	
	try{
		
		Bureaucrat shelly("Shelly Ann Fraser", 50);
		std::cout << shelly << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught an exception: " << e.what();
	}

	try{
		
		Bureaucrat bolt("Usain bolt", 0);
		std::cout << bolt << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught an exception: " << e.what();
	}*/


	return (0);
}