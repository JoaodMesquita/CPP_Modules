#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat DSebastiao("D. Seastiao", 44);
		Intern joao;
		AForm* shrubbery;
		shrubbery = joao.makeform("shrubbery creation", "trees");
		std::cout << *shrubbery << std::endl;
		DSebastiao.signForm(*shrubbery);
		std::cout << *shrubbery << std::endl;
		DSebastiao.executeForm(*shrubbery);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what();
	}

	return (0);
}