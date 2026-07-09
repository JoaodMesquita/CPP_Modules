#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Spablob3"), _grade(){};

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{

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

void Bureaucrat::incrementGrade()
{

}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj){

	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
} 