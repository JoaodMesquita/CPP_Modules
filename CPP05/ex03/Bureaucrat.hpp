#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>


class AForm;

class Bureaucrat
{
	private:
	
		const std::string _name;
		int _grade;
	
	public:
	
		Bureaucrat(const std::string, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void incrementGrade(int amount);
		void decrementGrade(int amount);
		void signForm(AForm& form);
		void executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception {

			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif