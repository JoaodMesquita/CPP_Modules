#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){

	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target){

	std::cout << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){

	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::executeA() const{

	std::string file_name;

	file_name = _target + "_shrubbery";

	std::ofstream file(file_name.c_str());
	if (!file)
	{
		std::cout << "Error: File not opened\n";
	}
	
	file << "      /|\\            /|\\            /|\\\n";
	file << "     /|||\\          /|||\\          /|||\\\n";
	file << "    /|||||\\        /|||||\\        /|||||\\\n";
	file << "   /|||||||\\      /|||||||\\      /|||||||\\\n";
	file << "  /|||||||||\\    /|||||||||\\    /|||||||||\\\n";
	file << " /|||||||||||\\  /|||||||||||\\  /|||||||||||\\\n";
	file << "/|||||||||||||\\/|||||||||||||\\/|||||||||||||\\\n";
	file << "      |||            |||            |||\n";
	file << "      |||            |||            |||\n";
	file << "      |||            |||            |||\n";
	file.close();
}