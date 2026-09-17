#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	std::srand(std::time(NULL));

	int i = 0;
	std::cout << "--------------------------------------\n";
	std::cout << "       Generate random instances      \n";
	std::cout << "--------------------------------------\n";
	while (i < 5)
	{
		Base* random = generate();
		identify(random);
		delete random;
		i++;
	}

	std::cout << "\n--------------------------------------\n";
	std::cout << "       Passing a NULL pointer         \n";
	std::cout << "--------------------------------------\n";

	Base* nullptr = NULL;
	identify(nullptr);
	//delete nullptr;

	std::cout << "\n--------------------------------------\n";
	std::cout << "         Passing a reference          \n";
	std::cout << "--------------------------------------\n";

	Base* ptr = generate();
	Base& ptrREF = *ptr;

	identify(ptr);
	identify(ptrREF);

	delete ptr;

	return (0);
}