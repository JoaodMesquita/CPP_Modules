#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "\n--------TEST PRESIDENTAL PARDON FORM--------\n";

	Bureaucrat a("Joao", 4);
	Bureaucrat b("Ye", 6); //grade too low
	Bureaucrat c("Michael", 1);
	PresidentialPardonForm form("Jorge Sampaio"); //signed
	PresidentialPardonForm form1("Cavaco Silva"); //not signed
	a.signForm(form);
	
	try
	{
		a.executeForm(form);
		b.executeForm(form);
		c.executeForm(form1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--------TEST SHRUBBERY FORM--------\n";

	Bureaucrat d("Scanlan", 130);
	Bureaucrat f("Vax", 138);
	ShrubberyCreationForm contract("Mythcarver");
	d.signForm(contract);

	try
	{
		d.executeForm(contract); //check ".._shrubbery file";
		f.executeForm(contract);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--------TEST ROBOTOMY FORM--------\n";

	Bureaucrat g("Grog", 44);
	Bureaucrat h("Percival", 46);
	RobotomyRequestForm treat("Altair");
	g.signForm(treat);

	try
	{
		g.executeForm(treat);
		h.executeForm(treat);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--------COPY ASSIGNMENT (CONST MEMBERS)--------\n";

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

	std::cout << "\n--------COPY OPERATOR--------\n";

	ShrubberyCreationForm shrubbery_original("Shrubbery");
	ShrubberyCreationForm shrubbery_copy(shrubbery_original);

	PresidentialPardonForm Presidential_original("Presidential");
	PresidentialPardonForm Presidential_copy(Presidential_original);

	RobotomyRequestForm Robotomy_original("Robotomy");
	RobotomyRequestForm Robotomy_copy(Robotomy_original);

	std::cout << "\nOriginal: " << &shrubbery_original << std::endl;
	std::cout << "Copy: " << &shrubbery_copy << std::endl;

	std::cout << "\nOriginal: " << &Presidential_original << std::endl;
	std::cout << "Copy: " << &Presidential_copy << std::endl;

	std::cout << "\nOriginal: " << &Robotomy_original << std::endl;
	std::cout << "Copy: " << &Robotomy_copy << std::endl;


	std::cout << std::endl;
}