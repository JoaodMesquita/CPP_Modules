#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(75){

	std::cout << "Bureaucrat default constructor called\n";
};

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){

	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){

	std::cout << "Bureaucrat " << _name << " was destroyed" << std::endl;
}


std::string Bureaucrat::getName() const{

	return this->_name;
}

int Bureaucrat::getGrade() const{

	return this->_grade;
}

void Bureaucrat::incrementGrade(int amount)
{
	if (_grade - amount < 1)
		throw GradeTooHighException();
	_grade -= amount;
}

void Bureaucrat::decrementGrade(int amount)
{
	if (_grade + amount > 150)
		throw GradeTooLowException();
	_grade += amount;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){

	return "Grade is too high!\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){

	return "Grade is too low!\n";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj){

	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
}
