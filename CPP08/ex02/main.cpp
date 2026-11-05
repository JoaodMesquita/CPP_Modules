#include "MutantStack.hpp"

int	main(void)
{
	std::cout << "\n===== SUBJECT MAIN =====" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "===== EMPTY STACK =====" << std::endl;

	MutantStack<int> empty;

	std::cout << "size: " << empty.size() << std::endl;

	std::cout << "===== Reverse iterators const and non =====" << std::endl;

	MutantStack<int> reverse_stack;

	reverse_stack.push(10);
	reverse_stack.push(20);
	reverse_stack.push(30);
	reverse_stack.push(40);

	std::cout << "reversed stack: ";

	MutantStack<int>::reverse_iterator rev_it = reverse_stack.rbegin();
	MutantStack<int>::reverse_iterator rev_ite = reverse_stack.rend();
	while(rev_it != rev_ite)
	{
		std::cout << *rev_it;
		if (rev_ite != rev_ite -1)
			std::cout << ',';
		++rev_it;
	}
	std::cout << std::endl;

	MutantStack<int> const_reverse_iterator;

	const_reverse_iterator.push(100);
	const_reverse_iterator.push(200);
	const_reverse_iterator.push(300);

	std::cout << "const reversed stack: ";

	MutantStack<int>::const_reverse_iterator const_rev_it = const_reverse_iterator.rbegin();
	MutantStack<int>::const_reverse_iterator const_rev_ite = const_reverse_iterator.rend();
	while(const_rev_it != const_rev_ite)
	{
		std::cout << *const_rev_it;
		if (const_rev_it != const_rev_ite -1)
			std::cout << ',';
		++const_rev_it;
	}
	std::cout << std::endl;

	std::cout << "===== const iterators =====" << std::endl;
	
	MutantStack<int> og_stack;
	og_stack.push(100);
	og_stack.push(45);

	const MutantStack<int> const_stack(og_stack); //copy constructor.

	MutantStack<int>::const_iterator first = const_stack.begin();
	MutantStack<int>::const_iterator last = const_stack.end();

	while (first != last)
	{
		std::cout << *first << std::endl;
		++first;
	}

	//*first = 99; //tentar modificar um valor const

	std::cout << "===== Copy assignment =====" << std::endl;

	MutantStack<std::string> original;
	MutantStack<std::string> assigned;

	original.push("Joao");
	original.push("Pedro");

	std::cout << "Original top element: " <<original.top() << std::endl;

	assigned.push("Yerin");
	std::cout << "Original top element: " <<assigned.top() << std::endl;

	assigned = original;

	std::cout << "assigned: " << assigned.top() << std::endl;

	return 0;
}