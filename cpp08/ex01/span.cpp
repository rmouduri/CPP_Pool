#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include "span.hpp"

Span::Span(void): _N(0), _data(0)
{
}

Span::Span(unsigned int n): _N(n), _data(0)
{
}

Span::Span(Span const & rhs)
{
	*this = rhs;
}

Span::~Span(void)
{
}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs) {
		this->_data = rhs._data;
		this->_N = rhs._N;
	}

	return *this;
}

void Span::addNumber(int i) throw(isFullException)
{
	if (this->_data.size() >= this->_N) {
		throw isFullException();
	}

	this->_data.push_back(i);
}

void Span::fill(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) throw (isFullException)
{
	while (begin != end) {
		addNumber(*begin++);
	}
}

size_t Span::longestSpan(void) const
{
	if (this->_data.size() < 2) {
		return 0;
	}

	std::vector<int>sorted(this->_data);
	std::sort(sorted.begin(), sorted.end());

	return abs(sorted.back() - sorted.front());
}

size_t Span::shortestSpan(void) const
{
	std::vector<int>sorted(this->_data);
	std::sort(sorted.begin(), sorted.end());
	size_t span = -1;
	std::vector<int>::const_iterator c;

	for (c = sorted.begin(); c + 1 != sorted.end(); ++c) {
		// std::cout << *c << " and " << *(c + 1) << '\n';
		size_t sub = abs(*c - *(c + 1));
		if (sub == 0) {
			return 0;
		}
		if (sub < span) {
			span = sub;
		}
	}
	return span;
}

std::vector<int> const & Span::getData(void) const
{
	return this->_data;
}

char const * Span::isFullException::what(void) const throw()
{
	return "Span is full";
}
