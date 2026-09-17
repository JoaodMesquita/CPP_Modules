#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "Destructing Base\n" ;
}

//It randomly instantiates A, B, or C and returns the instance as a Base pointer.
Base * generate(void)
{
	int	option = std::rand() % 3;

	switch (option)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			return NULL;
	}
}

//It prints the actual type of the object pointed to by p: "A", "B", or "C".
void identify(Base* p)
{
	if (!p)
	{
		std::cout << "Error: Null pointer\n";
		return ;
	}
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C\n";
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
			std::cout << "A\n";
	}
	catch (std::exception&) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch (std::exception&) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch (std::exception&) {}
}