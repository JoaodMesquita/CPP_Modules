#include "Span.hpp"

Span::Span() : _maxsize(0), _container() {};

Span::Span(unsigned int n) : _maxsize(n), _container() {};

Span::Span(const Span& other) : _maxsize(other._maxsize), _container(other._container){};

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_maxsize = other._maxsize;
		this->_container = other._container;
	}
	return *this;
};

void Span::addNumber(int n)
{
	if (_container.size() < _maxsize)
		_container.push_back(n);
	else
		throw std::out_of_range("Error: Maximum capacity reached");
};

unsigned int Span::shortestSpan() const
{
	if (_container.size() < 2)
		throw std::logic_error("Error: Container with less than 2 elements");
	std::vector<int> tmp = _container; 
	std::sort(tmp.begin(), tmp.end());
	unsigned int result = std::numeric_limits<unsigned int>::max();
	for (unsigned int i = 0; i < tmp.size(); i++)
	{
		unsigned int diff = tmp[i + 1] - tmp[i];
		if (diff < result)
			result = diff;
	}
	return result;
}

void Span::printElements() const
{
	for (std::vector<int>::const_iterator it = _container.begin(); it != _container.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
}

Span::~Span() {};