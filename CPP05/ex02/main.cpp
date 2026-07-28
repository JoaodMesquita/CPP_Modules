#include "AForm.hpp"

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
    try
    {
        Bureaucrat a("Alice", 1);
        Bureaucrat b("Bob", 75);
        Bureaucrat c("Charlie", 150);

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}