#include "Form.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
: _name(name), isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){

	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form& other) 
: _name(other._name), isSigned(other.isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute){}

Form& Form::operator=(const Form& other){

	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

Form::~Form(){

	std::cout << "Form was destroyed" << std::endl;
}

bool Form::getSignature(){

	return isSigned;
}

std::string Form::getName(){
	
	return _name;
}

void Form::beSigned(const Bureaucrat& Bureaucrat){

	if (Bureaucrat.getGrade() <= _gradeToSign)
		isSigned = true;
	else
		throw GradeTooLowException();
}