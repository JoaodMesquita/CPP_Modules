#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Run: " << av[0] << " <file>" << "\n";
		return 1;
	}

	try
	{
		BitcoinExchange btc;
		const std::string input = av[1];
		btc.validateInput(input);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}