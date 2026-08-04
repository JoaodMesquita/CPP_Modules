#include "Intern.hpp"

int main(void)
{

	std::cout <<"\n====Shrubbery MakeForm====\n";
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

	std::cout <<"\n====Presidential MakeForm====\n";
	try
	{
		Bureaucrat DJoaoI("D. Joao I", 50);
		Intern daniel;
		AForm* presidential;
		presidential = daniel.makeForm("presidential pardon", "convict");
		std::cout << *presidential << std::endl;
		DJoaoI.signForm(*presidential);
		DJoaoI.executeForm(*presidential);
		delete presidential;
	}
	catch(const std::exception& e)
	{
		std::cout << "Caught exception: " << e.what();
	}
	
	std::cout <<"\n====Robotomy MakeForm====\n";
	try
	{
		Bureaucrat Stitch("Stitch", 20);
		Intern lilo;
		AForm* Zord;
		Zord = lilo.makeForm("robotomy request", "zed");
		std::cout << *Zord << std::endl;
		Stitch.signForm(*Zord);
		Stitch.executeForm(*Zord);
		delete Zord;
	}
	catch(const std::exception& e)
	{
		std::cout << "Caught exception: " << e.what();
	}
	
	std::cout << "\n====Copy constructor (Intern)====" << std::endl;
	try
	{
		Bureaucrat Infantino("Infantino", 70);
		Intern Bas;
		std::cout << &Bas << std::endl;
		Intern Bis(Bas);
		std::cout << &Bis << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << "Caught exception: " << e.what() << '\n';
	}
	
	std::cout << "\n====Copy assignment (Intern)====" << std::endl;
	try
	{
		Bureaucrat Maria("Maria", 70);
		Intern nelson;
		std::cout << &nelson << std::endl;
		Intern rodrigo(nelson);
		std::cout << &rodrigo << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << "Caught exception: " << e.what() << '\n';
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