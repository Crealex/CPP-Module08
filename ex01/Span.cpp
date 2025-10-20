
#include "colors.hpp"
#include "Span.hpp"

// *** CONSTRUCTOR/DESTRUCTOR ***

Span::Span(): _N(0)
{
	std::cout << GREEN << "Default Span constructor called" << RESET << std::endl;
}

Span::Span(unsigned int N): _N(N)
{
	std::cout << LIGHT_GREEN << "Specific Span constructor with N = " << N << " called" << RESET << std::endl;
}

Span::Span(const Span &cpy): _N(cpy._N), _multiset(cpy._multiset)
{
	std::cout << BLUE << "Copy Span constructor called" << RESET << std::endl;
}

Span::~Span()
{
	std::cout << YELLOW << "Span destructor called" << RESET << std::endl;
}

// *** OVERLOAD OPERATOR ***

Span &Span::operator=(const Span &rhs)
{
	this->_N = rhs._N;
	this->_multiset = rhs._multiset;
	std::cout << LIGHT_BLUE << "Span assignment operator called" << RESET << std::endl;
	return (*this);
}

// *** METHODS ***

void Span::addNumber(int n)
{
	if (this->_N <= this->_multiset.size())
		throw std::length_error(RED "Error, multiset is full" RESET);
	this->_multiset.insert(n);
	std::cout << GREEN << n << " added!" << std::endl;
}

void Span::printNum(const int it)
{
	std::cout << it << " ";
}

void Span::printMultiset() const
{
	std::cout << "multiset: ";
	std::for_each(this->_multiset.begin(), this->_multiset.end(), printNum);
	std::cout << std::endl;
}

unsigned int Span::shortestSpan() const // Check les trucs de gpt
{
	int	smallest;
	std::multiset<int>::iterator it = this->_multiset.begin();
	std::multiset<int>::iterator nextIt = it;

	if (this->_multiset.size() <= 1)
		throw std::length_error(RED "Error, too few elements" RESET);
	nextIt++;
	smallest = *nextIt - *it;
	while (nextIt != this->_multiset.end())
	{
		smallest = std::min(smallest, *nextIt - *it);
		it++;
		nextIt++;
	}
	return (smallest);
}

unsigned int Span::longestSpan() const
{
	if (this->_multiset.size() <= 1)
		throw std::length_error(RED "Error, too few elements" RESET);
	return (*this->_multiset.rbegin() - *this->_multiset.begin());
}