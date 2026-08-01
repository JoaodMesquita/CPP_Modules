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

	return "Invalid Form!\n";
}


AForm* Intern::makeform(const std::string& name, const std::string& target){

	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	int x;
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
			x = i;
	}

	switch(x)
	{
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		default:
			throw InvalidFormException();
	}
}

Intern::~Intern(){

	std::cout << "Intern was destroyed\n";
}