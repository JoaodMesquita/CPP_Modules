#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat DSebastiao("D. Seastiao", 15);
		Intern joao;
		AForm* shrubbery;
		shrubbery = joao.makeform("shrubbery creation", "trees");
		
		std::cout << shrubbery << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what();
	}

	return (0);
}