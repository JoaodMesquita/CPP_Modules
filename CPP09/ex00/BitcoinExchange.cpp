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
			//std::cout << line << "\n";
		}	
	}
	else
		throw std::runtime_error("Error: File not found");
}

int	BitcoinExchange::checkFormat(const std::string line)
{
	std::size_t pos = line.find("|");
	if (pos == std::string::npos)
	{
		std::cout << "Error: bad input" << "\n"; //Update message to Error: input => <date>
		return 0;
	}
	std::string date = line.substr(0, pos);
	std::string value = line.substr(pos);
	std::cout << date << value << "\n";
	return 1;
}
