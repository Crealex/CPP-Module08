
#include "colors.hpp"
#include "Span.hpp"

// *** CONSTRUCTOR/DESTRUCTOR ***

Span::Span(): _N(0)
{
	std::cout << GREEN << "Default Span constructor called" << RESET << std::endl;
}

Span::Span(unsigned int N): _N(N)
{
	std::cout << LIGHT_GREEN << "Specific Span constructor with N = " << N << " called" << std::endl;
}

Span::Span(const Span &cpy): _N(cpy._N), _multiset(cpy._multiset)
{
	std::cout << BLUE << "Copy Span constructor called" << RESET << std::endl;
}

Span::~Span()
{
	std::cout << RED << "Span destructor called" << RESET << std::endl;
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
	this->_multiset.insert(n);
}

void Span::printNum(std::multiset<int>::iterator it)
{
	std::cout << *it << std::endl;
}

void Span::printMultiset() const
{
	std::for_each(this->_multiset.begin(), this->_multiset.end(), printNum);
}