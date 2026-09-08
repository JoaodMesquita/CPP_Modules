#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

enum literal
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

class ScalarConverter
{
	private:

		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
		static literal identifyLiteral(const std::string &input);
		static int isChar(const std::string &input);
		static int isInt(const std::string &input);
		static int isFloat(const std::string &input);
		static int isDouble(const std::string &input);

	public:

		static void convert(std::string &input);
};

#endif