#include "Form.hpp"

int main (void)
{

	Bureaucrat Boss ("Boss", 80);
	Bureaucrat worker("Worker", 100);
	Form contract("form", 70, 10);
	
	Boss.signForm(contract);
	//std::cout << contract << std::endl;



	return (0);
}