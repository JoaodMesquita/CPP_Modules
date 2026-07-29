#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

/* int main (void)
{

	try
	{
		Bureaucrat Boss ("Boss", -80);
		Bureaucrat worker("Worker", 100);
		Form contract("form", 70, 10);
		Form contract2("form2", 110, 10);
		
		Boss.signForm(contract);
		worker.signForm(contract2);
	
		std::cout << Boss << std::endl;
		std::cout << contract << std::endl;
		std::cout << contract2 << std::endl;
	
		std::cout << contract.getGradeToSign() << std::endl;
		std::cout << contract.getGradeToExecute() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
} */

int main(void)
{
	
// --------TEST PRESIDENTAL PARDON FORM-------

/* 	Bureaucrat a("Joao", 4);
	Bureaucrat b("Ye", 6);
	Bureaucrat c("Michael", 1);
	PresidentialPardonForm form("Jorge Sampaio");
	PresidentialPardonForm form1("Cavaco Silva");
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
	} */

// --------TEST SHRUBBERY FORM-------

	Bureaucrat d("Scanlan", 130);
	Bureaucrat f("Vax", 138);
	ShrubberyCreationForm form("Mythcarver");
	d.signForm(form);

	try
	{
		d.executeForm(form);
		f.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}