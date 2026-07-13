#include "Bureaucrat.hpp"

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
	if (_grade > 1)
		_grade += amount;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(int amount)
{
	if (_grade < 150)
		_grade -= amount;
	else
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form& form){

	if (form.getSignature() == true)
		std::cout << "form "<< form.getName() << " was already signed" << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << this->getName() << " couldn't sign " << form.getName() 
			<< " because " << e.what();
		}
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj){

	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
} 