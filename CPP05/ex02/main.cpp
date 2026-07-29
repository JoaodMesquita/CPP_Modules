#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	Bureaucrat a("Joao", 4);
	Bureaucrat b("Ye", 6);
	Bureaucrat c("Michael", 1);
	PresidentialPardonForm form("Jorge Sampaio");
	a.signForm(form);
	
// --------TEST PRESIDENTAL PARDON FORM-------
	try
	{
		a.executeForm(form);
		b.executeForm(form);
		//c.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}