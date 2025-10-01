#ifndef EASYFIND_HPP

# define EASYFIND_HPP

#include "colors.hpp"
# include <list>
# include <vector>
# include <deque>
# include <algorithm>
# include <exception>
# include <iostream>

class unfoundException: public std::exception
{
	public:
		virtual const char *what() const throw(){return ("Number unfound in the container");};
};

template<typename T>
typename T::iterator	easyfind(T &container, int tofind)
{
	typename T::iterator num = std::find(container.begin(), container.end(), tofind);
	if (num == container.end())
		throw (::unfoundException());
	return (num);
}

template<typename T>
typename T::const_iterator	easyfind(T const &container, int tofind)
{
	typename T::const_iterator num = std::find(container.begin(), container.end(), tofind);
	if (num == container.end())
		throw (::unfoundException());
	return (num);
}

template<typename T>
void	printContainer(T cont)
{
	for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

}


#endif