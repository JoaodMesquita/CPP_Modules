#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter(){}

int	ScalarConverter::isChar(const std::string &input)
{
	return (input.length() == 1 && !isdigit(input[0]));
}

int	ScalarConverter::isInt(const std::string &input)
{
	int	i = 0;
	if (input[0] == '-' || input[0] == '+')
		i++;
	while (input[i])
	{
		if (!isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ScalarConverter::isFloat(const std::string &input)
{
	if (input == "nanf" || input == "+inff" || input == "-inff")
		return (1);
	size_t i = input.length();
	if (input[i - 1] == 'f' && input[i - 2] != '.')
	{
		size_t j = 0;
		if (input[j] == '-' || input[j] == '+')
			j++;
		size_t pos = input.find('.');
		if (pos == std::string::npos)
			return (0);
		while(input[j] && j < pos)
		{
			if (!isdigit(input[j]))
				return (0);
			j++;
		}
		pos++;
		while (input[pos] && pos < (i - 1))
		{
			if (!isdigit(input[pos]))
				return (0);
			pos++;
		}
		return (1);
	}
	return (0);
}

int	ScalarConverter::isDouble(const std::string &input)
{
	if (input == "nan" || input == "+inf" || input == "-inf")
		return (1);
	size_t i = 0;
	if (input[0] == '-' || input[0] == '+')
		i++;
	size_t pos = input.find('.');
	if (pos == std::string::npos)
		return (0);
	while (input[i])
	{
		if (!isdigit(input[i]) && i < pos)
			return (0);
		i++;
	}
	++pos;
	if (input[pos] == '\0')
		return (0);
	while (input[pos])
	{
		if (!isdigit(input[pos]))
			return (0);
		pos++;
	}
	return (1);
}

void convertChar(const std::string &input)
{
	char	literal = input[0];

	std::cout << "char: " << literal << "\n";
	std::cout << "int: " << static_cast<int>(literal) << "\n";
	std::cout << "float: " << static_cast<float>(literal) << ".0f" << "\n";
	std::cout << "double: " << static_cast<double>(literal) << ".0" << "\n";
}

void convertInt(const std::string &input)
{
	int num;

	std::stringstream ss(input);
	ss >> num;

	if (num >= 32 && num <= 127)
		std::cout << "char: " << static_cast<char>(num) << "\n";
	else
		std::cout << "char: impossible" << "\n";
}

literal	ScalarConverter::identifyLiteral(const std::string &input)
{
	if (isChar(input))
		return CHAR;
	else if (isInt(input))
		return INT;
	else if (isFloat(input))
		return FLOAT;
	else if (isDouble(input))
		return DOUBLE;
	else
		return INVALID;
}

void ScalarConverter::convert(std::string &input)
{
	literal type = identifyLiteral(input);

	switch (type)
	{
		case CHAR:
			convertChar(input);
			break;
		case INT:
			convertInt(input);
			break;
		case FLOAT:
			std::cout << type << "\n";
			break;
		case DOUBLE:
			std::cout << type << "\n";
			break;
		case INVALID:
			std::cout << "Invalid format" << "\n";
			break;
	}
}
