#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Run: " << av[0] << " <file>" << "\n";
		return 1;
	}

	BitcoinExchange btc;
	const std::string input = av[1];

	btc.validateInput(input);

	return 0;
}