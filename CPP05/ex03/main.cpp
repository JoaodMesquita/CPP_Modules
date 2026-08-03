#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat DSebastiao("D. Seastiao", 44);
		Intern joao;
		AForm* shrubbery;
		shrubbery = joao.makeForm("shrubbery creation", "trees");
		std::cout << *shrubbery << std::endl;
		DSebastiao.signForm(*shrubbery);
		std::cout << *shrubbery << std::endl;
		DSebastiao.executeForm(*shrubbery);
		delete shrubbery;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what();
	}

	std::cout << "\n====Invalid Form====" << std::endl;

	try
	{
		Intern vip;
		AForm* unknown;
		unknown = vip.makeForm("Form", "something");
		delete unknown;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what();
	}
	return (0);
}