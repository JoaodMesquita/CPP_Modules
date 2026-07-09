#include "Bureaucrat.hpp"

int main (void)
{

	try{
		
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
	}

	return (0);
}