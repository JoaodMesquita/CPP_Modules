#include "AForm.hpp"

class Intern
{
	public:

		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();

		AForm* makeform(const std::string& name, const std::string& target);
};