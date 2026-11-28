#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

struct DATE
{
	int day;
	int month;
	int year;
};

class BitcoinExchange
{



	public:
	/* 	BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange &operator=(const BitcoinExchange& other);
		~BitcoinExchange(); */

		void	validateInput(const std::string &input);
		int		checkFormat(const std::string &line);
		int	checkDate(const std::string &line);
};

#endif