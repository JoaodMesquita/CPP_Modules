#include "Bureaucrat.hpp"

int main (void)
{

	/* //Copy constructor
	Bureaucrat a ("joao", 4);
	Bureaucrat b (a);

	std::cout << "A: "<< a << std::endl;
	std::cout << "B: "<< b << std::endl;

	//Assignment operator
	Bureaucrat c ("Ana", 150);
	Bureaucrat d ("Manel", 50);

	d = c;

	std::cout << "C: "<< c << std::endl;
	std::cout << "D: "<< d << std::endl; */

	std::cout << "\n====Increment====" << std::endl;
	try
	{
		Bureaucrat obama ("Patrick", 10);
		Bureaucrat jordan ("Rick", 5);
		
		jordan.incrementGrade(4);
		std::cout << jordan << std::endl;
		obama.incrementGrade(14);
		std::cout << obama << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught an exception: " << e.what();
	}

	std::cout << "\n====Decrement====" << std::endl;
	try
	{
		Bureaucrat nix ("Mac", 10);
		Bureaucrat vim ("Zap", 5);
		
		nix.decrementGrade(100);
		std::cout << nix << std::endl;
		vim.decrementGrade(146);
		std::cout << vim << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught an exception: " << e.what();
	}
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