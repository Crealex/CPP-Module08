#ifndef SPAN_TPP

# define SPAN_TPP

// # include "Span.hpp"

template<typename T>
void Span::addNumbers(T start, T end)
{
	size_t dist = std::distance(start, end);
	if (this->_multiset.size() + dist > this->_N)
		throw std::out_of_range("Error, too few spaces to add the range of numbers");
	this->_multiset.insert(start, end);
}

#endif