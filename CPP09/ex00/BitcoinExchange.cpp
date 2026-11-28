#include "BitcoinExchange.hpp"

/* BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{

}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& other)
{

}

BitcoinExchange::~BitcoinExchange()
{

} */

void	BitcoinExchange::validateInput(const std::string &input)
{
	std::ifstream fs(input.c_str());
	if (fs.is_open())
	{
		std::string line;
		getline(fs, line);
		if (line.empty() || line != "date | value")
			throw std::runtime_error("Error: Invalid File");
		while(getline(fs, line))
		{
			if (!checkFormat(line))
				continue;
			else if (!checkDate(line))
				continue;
		}	
	}
	else
		throw std::runtime_error("Error: File not found");
}

int	BitcoinExchange::checkFormat(const std::string &line)
{
	std::size_t pos = line.find("|");
	if (pos == std::string::npos)
	{
		std::cerr << "Error: bad input" << "\n";
		return 0;
	}	
	std::string date = line.substr(0, pos);
	std::string value = line.substr(pos + 1);

	if (date.empty() || date.find_first_not_of(" \t") == std::string::npos)
	{
		std::cerr << "Error: bad input" << "\n";
		return 0;
	}
	else if (value.empty() || value.find_first_not_of(" \t") == std::string::npos)
	{
		std::cerr << "Error: bad input" << "\n";
		return 0;
	}
	else if (value.find("|") != std::string::npos)
	{
		std::cerr << "Error: bad input" << "\n";
		return 0;
	}
	return 1;
}

int	BitcoinExchange::checkDate(const std::string &line)
{
	std::string str = line.substr(0, line.find("|"));
	std::size_t first_char = str.find_first_not_of(" \t");
	std::size_t last_char = str.find_last_not_of(" \t");
	std::string date = str.substr(first_char, last_char - first_char + 1);

	if (date.size() != 10 || (date[4] != '-' || date[7] != '-'))
	{
		std::cerr << "Error: Wrong date format => <YYYY-DD-MM>" << "\n";
		return 0;
	}
	for (std::size_t i = 0; i < date.size(); i++)
	{
		if (date[i] == '-')
			i++;
		else if (std::isdigit(date[i]) == 0)
		{
			std::cerr << "Error: Wrong date format => <YYYY-DD-MM>" << "\n";
			return 0;
		}
	}
	
	std::string year = date.substr(0, date.find("-"));
	std::string month = date.substr(date.find("-") + 1, date.find_last_of("-") - date.find("-") - 1);
	std::string day = date.substr(date.find_last_of("-") + 1);

	int yearInt = atoi(year.c_str());
	//int dayInt = atoi(day.c_str());
	//int monthInt = atoi(month.c_str());

	if (yearInt <= 2008 || yearInt > 2022)
	{
		std::cerr << "Error: year out of range." << std::endl;
		return 0;
	}

	std::cout << year << "-" << month << "-" << day << "\n";

	return 1;
}
