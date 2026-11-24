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
	if (!fs.is_open())
		std::cout << "File not found: " << "'" << input << "'" << "\n";

	
}