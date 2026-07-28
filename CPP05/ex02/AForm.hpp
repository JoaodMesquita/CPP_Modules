#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:

		const std::string _name;
		bool isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;

	protected:

		virtual void executeA() const = 0;
	
	public:

		AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		~AForm();


		void beSigned(const Bureaucrat& Bureaucrat);
		bool getSignature() const;
		std::string getName() const;
		int	getGradeToSign() const;
		int getGradeToExecute() const;
		void execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception {

			const char* what() const throw() {

				return "grade is too high.";
			}
		};

		class GradeTooLowException : public std::exception {

			const char* what() const throw() {

				return "grade is too low.";
			}
		};

		class NotSignedExecption : public std:: exception {

				const char* what() const throw()
				{
					return "Form is not signed!";
				}
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);
