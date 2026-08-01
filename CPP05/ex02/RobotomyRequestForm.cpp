#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(){};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){

	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target){

	std::cout << "RobotomyRequestForm copy constructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){

	std::cout << "RobotomyRequestForm copy assignment called\n";
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
};

void RobotomyRequestForm::executeA() const{

	int result;
	
	std::cout << "BZZZZZ....* driling noises *\n";

	srand(time(NULL));
	result = rand() % 2;

	if (result == 0)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << _target << " robotomy has failed\n";
}