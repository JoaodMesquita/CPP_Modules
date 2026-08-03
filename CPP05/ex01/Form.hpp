
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:

		const std::string _name;
		bool isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;

	public:

		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		void beSigned(const Bureaucrat& Bureaucrat);
		bool getSignature() const;
		std::string getName() const;
		int	getGradeToSign() const;
		int getGradeToExecute() const;

		class GradeTooHighException : public std::exception {

			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif