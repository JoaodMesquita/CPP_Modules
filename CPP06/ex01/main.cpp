#include "Serializer.hpp"

int	main(void)
{
	Data athlete;

	athlete.medals = 5;
	athlete.name = "Michael Jordan";

	std::cout << "Name: " << athlete.name << "\n";
	std::cout << "Medals: " << athlete.medals << "\n";

	
}