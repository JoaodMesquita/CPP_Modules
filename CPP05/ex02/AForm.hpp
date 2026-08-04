#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

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

		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();


		void beSigned(const Bureaucrat& Bureaucrat);
		bool getSignature() const;
		std::string getName() const;
		int	getGradeToSign() const;
		int getGradeToExecute() const;
		void execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception {

			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {

			public:
				const char* what() const throw();
		};

		class NotSignedException : public std:: exception {

			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif