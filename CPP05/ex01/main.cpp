#include "Form.hpp"

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
    std::cout << "===============================" << std::endl;
    std::cout << "      BUREAUCRAT TESTS" << std::endl;
    std::cout << "===============================" << std::endl;

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

    std::cout << "\n===============================" << std::endl;
    std::cout << " INVALID BUREAUCRATS" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Bureaucrat invalid("InvalidHigh", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat invalid("InvalidLow", 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << "      FORM TESTS" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Form tax("Tax Form", 50, 25);
        Form contract("Contract", 10, 5);
        Form permit("Permit", 150, 150);

        std::cout << tax << std::endl;
        std::cout << contract << std::endl;
        std::cout << permit << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << " INVALID FORMS" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Form invalid("TooHigh", 0, 10);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Form invalid("TooLow", 10, 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << " SUCCESSFUL SIGN" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Bureaucrat boss("Boss", 1);
        Form secret("Secret File", 5, 5);

        std::cout << secret << std::endl;

        boss.signForm(secret);

        std::cout << secret << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << " FAILED SIGN" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Bureaucrat intern("Intern", 150);
        Form military("Military Access", 20, 10);

        intern.signForm(military);

        std::cout << military << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << " MULTIPLE SIGN ATTEMPTS" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Bureaucrat low("Low", 120);
        Bureaucrat mid("Mid", 40);
        Bureaucrat high("High", 10);

        Form document("Important Document", 50, 50);

        std::cout << document << std::endl;

        low.signForm(document);

        mid.signForm(document);

        high.signForm(document);

        std::cout << document << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << " ALREADY SIGNED FORM" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Bureaucrat chief("Chief", 1);
        Form report("Annual Report", 10, 10);

        chief.signForm(report);
        chief.signForm(report);

        std::cout << report << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << " DIRECT beSigned()" << std::endl;
    std::cout << "===============================" << std::endl;

    try
    {
        Bureaucrat employee("Employee", 30);
        Form file("File", 25, 25);

        try
        {
            file.beSigned(employee);
            std::cout << "Signed successfully." << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "beSigned() exception: "
                      << e.what() << std::endl;
        }

        std::cout << file << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===============================" << std::endl;
    std::cout << " END OF TESTS" << std::endl;
    std::cout << "===============================" << std::endl;

    return 0;
}