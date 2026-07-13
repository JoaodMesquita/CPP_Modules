
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

//class Bureaucrat;

class Form
{
	private:

		const std::string _name;
		bool isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;

	public:

		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		void beSigned(const Bureaucrat& Bureaucrat);



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