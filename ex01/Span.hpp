
#ifndef SPAN_HPP
# define SPAN_HPP

# include "colors.hpp"
# include <iostream>
# include <set>
# include <vector>
# include <algorithm>
# include <stdexcept>
# include <iterator>

class Span
{
	private:
	unsigned int		_N;
	std::multiset<int>	_multiset;

	static void	printNum(int it);

	public:
	// CONSTRUCTOR/DESTRUCTOR
	Span();
	Span(unsigned int N);
	Span(const Span& cpy);
	~Span();

	//OVERLOAD OPERATOR
	Span &operator=(const Span& rhs);

	// METHODS
	void	addNumber(int n);
	template<typename T>
	void	addNumbers(T start, T);

	void	printMultiset() const;
	int		shortestSpan() const;
	int		longestSpan() const;

};

# include "Span.tpp"
#endif
