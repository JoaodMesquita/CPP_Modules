#include "Form.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
: _name(name), isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){

	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form& other)
: _name(other._name), isSigned(other.isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute){

	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other){

	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

Form::~Form(){

	std::cout << "Form was destroyed" << std::endl;
}

std::string Form::getName() const{
	
	return _name;
}

bool Form::getSignature() const{

	return isSigned;
}

int Form::getGradeToSign() const{

	return _gradeToSign;
}

int Form::getGradeToExecute() const{

	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat& Bureaucrat){

	if (Bureaucrat.getGrade() <= _gradeToSign)
		isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& obj){

	if (obj.getSignature())
		out << obj.getName() << ", signed: yes," <<  " grade to sign " << obj.getGradeToSign() << ", grade to execute " << obj.getGradeToExecute();
	else
		out << obj.getName() << ", signed: no," <<  " grade to sign " << obj.getGradeToSign() << ", grade to execute " << obj.getGradeToExecute();

	return out;
}