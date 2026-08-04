#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "====TEST PRESIDENTAL PARDON FORM====\n";

	try
	{
		Bureaucrat a("Joao", 4);
		Bureaucrat b("Ye", 6); //grade too low
		Bureaucrat c("Michael", 1);
		PresidentialPardonForm unknown;
		std::cout << unknown << std::endl;
		PresidentialPardonForm form("Jorge Sampaio"); //signed
		PresidentialPardonForm form1("Cavaco Silva"); //not signed
		a.signForm(form);
		a.executeForm(form);
		b.executeForm(form);
		c.executeForm(form1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====TEST SHRUBBERY FORM====\n";

	try
	{
		Bureaucrat d("Scanlan", 130);
		Bureaucrat f("Vax", 138);
		ShrubberyCreationForm contract("Mythcarver");
		ShrubberyCreationForm unknown1;
		std::cout << unknown1 << std::endl;
		d.signForm(contract);
		d.executeForm(contract); //check ".._shrubbery file";
		f.executeForm(contract);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====TEST ROBOTOMY FORM====\n";


	try
	{
		Bureaucrat g("Grog", 44);
		Bureaucrat h("Percival", 46);
		RobotomyRequestForm treat("Altair");
		RobotomyRequestForm unknown2;
		std::cout << unknown2 << std::endl;
		g.signForm(treat);
		g.executeForm(treat);
		h.executeForm(treat);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n====COPY ASSIGNMENT (CONST MEMBERS)====\n";

	try
	{
		Bureaucrat boss("Boss", 1);
	
		PresidentialPardonForm A("Target A");
		PresidentialPardonForm B("Target B");
	
		boss.signForm(A);
	
		std::cout << "\nBefore assignment:\n";
		std::cout << A << std::endl;
		std::cout << B << std::endl;
	
		B = A;
	
		std::cout << "\nAfter assignment:\n";
		std::cout << A << std::endl;
		std::cout << B << std::endl;
	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "\n====COPY OPERATOR====\n";
	
	try
	{
		ShrubberyCreationForm shrubbery_original("Shrubbery");
		ShrubberyCreationForm shrubbery_copy(shrubbery_original);
		
		PresidentialPardonForm Presidential_original("Presidential");
		PresidentialPardonForm Presidential_copy(Presidential_original);
		
		RobotomyRequestForm Robotomy_original("Robotomy");
		RobotomyRequestForm Robotomy_copy(Robotomy_original);
		
		std::cout << "\nOriginal: " << shrubbery_original << std::endl;
		std::cout << "Copy: " << shrubbery_copy << std::endl;
		
		std::cout << "\nOriginal: " << Presidential_original << std::endl;
		std::cout << "Copy: " << Presidential_copy << std::endl;
		
		std::cout << "\nOriginal: " << Robotomy_original << std::endl;
		std::cout << "Copy: " << Robotomy_copy << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}