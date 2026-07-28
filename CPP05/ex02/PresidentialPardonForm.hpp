#include "AForm.hpp"

class PresidentalPardonForm : public AForm
{
	private:

		std::string _target;

	public:

		PresidentalPardonForm();
		PresidentalPardonForm(std::string& target);
		PresidentalPardonForm(const PresidentalPardonForm& other);
		PresidentalPardonForm& operator=(const PresidentalPardonForm& other);
		~PresidentalPardonForm();

		virtual void executeA() const;
};