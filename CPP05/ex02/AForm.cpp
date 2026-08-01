#include "AForm.hpp"

AForm::AForm() : _name("Unknown"), _gradeToSign(75), _gradeToExecute(75){

	std::cout << "Form default constructor called\n";
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) 
: _name(name), isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){

	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

AForm::AForm(const AForm& other)
: _name(other._name), isSigned(other.isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute){

	std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other){

	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

AForm::~AForm(){

	std::cout << "AForm was destroyed" << std::endl;
}

std::string AForm::getName() const{
	
	return _name;
}

bool AForm::getSignature() const{

	return isSigned;
}

int AForm::getGradeToSign() const{

	return _gradeToSign;
}

int AForm::getGradeToExecute() const{

	return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& Bureaucrat){

	if (Bureaucrat.getGrade() <= _gradeToSign)
		isSigned = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const{

	if (!isSigned)
		throw NotSignedException();
	else if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
	executeA();
}

std::ostream& operator<<(std::ostream& out, const AForm& obj){

	if (obj.getSignature())
		out << obj.getName() << ", signed: yes," <<  " grade to sign " << obj.getGradeToSign() << ", grade to execute " << obj.getGradeToExecute();
	else
		out << obj.getName() << ", signed: no," <<  " grade to sign " << obj.getGradeToSign() << ", grade to execute " << obj.getGradeToExecute();

	return out;
}