#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int _maxsize;
		std::vector<int> _container;
	
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
	
		void addNumber(int n);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		void printElements() const;
};

#endif