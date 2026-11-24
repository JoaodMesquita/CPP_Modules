#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream> 


class BitcoinExchange
{



	public:
	/* 	BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange &operator=(const BitcoinExchange& other);
		~BitcoinExchange(); */

		void	validateInput(const std::string &input);
};

#endif