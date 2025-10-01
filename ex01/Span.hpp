
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <algorithm>

class Span
{
	private:
		unsigned int		_N;
		std::multiset<int>	_multiset;

		static void	printNum(std::multiset<int>::iterator it);

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
		void	printMultiset() const;
};

#endif
