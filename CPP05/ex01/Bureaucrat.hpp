#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>


class Form;

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
		void signForm(Form& form);

		class GradeTooHighException : public std::exception {

			const char* what() const throw() {

				return "Grade is too high!\n";
			}
		};

		class GradeTooLowException : public std::exception {

			const char* what() const throw() {

				return "Grade is too low!\n";
			}
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif