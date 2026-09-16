#include "Serializer.hpp"

int	main(void)
{
	Data	athlete;

	athlete.medals = 5;
	athlete.name = "Michael Jordan";

	std::cout << "Name: " << athlete.name << "\n";
	std::cout << "Medals: " << athlete.medals << "\n";

	uintptr_t serialized = Serializer::serialize(&athlete);
	Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "Memory address: " << &athlete << "\n";
	std::cout << "\nSerialized: " << serialized << "\n";
	std::cout << "Deserialized: " << deserialized << "\n";

	std::cout << "\nDeserialized name: " << deserialized->name << "\n";
	std::cout << "Deserialized age: " << deserialized->medals << "\n";

	if (&athlete == deserialized)
		std::cout << "\nTest: OK!" << "\n";
	else
		std::cout << "\nTest: KO!" << "\n";

	return (0);
}