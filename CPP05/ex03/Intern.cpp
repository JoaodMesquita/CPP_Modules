#include "Intern.hpp"

Intern::Intern(){

	std::cout << "Intern constructor called\n";
}

Intern::Intern(const Intern& other){

	*this = other;
}

Intern& Intern::operator=(const Intern& other){

	(void)other;
	return *this;
}

const char* Intern::InvalidFormException::what() const throw(){

	return "Form does not exist!\n";
}


AForm* Intern::makeForm(const std::string& name, const std::string& target){

	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	int x = -1;
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
			x = i;
	}

	switch(x)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return new PresidentialPardonForm(target);
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			throw InvalidFormException();
	}
}

Intern::~Intern(){

	std::cout << "Intern was destroyed\n";
}