
#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	std::cout << GREEN << "Default constructor mutantStack called" << RESET << std::endl;
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &cpy): std::stack<T>(cpy)
{
	std::cout << BLUE << "Copy constructor MutantStack called" << RESET << std::endl;
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << YELLOW << "Destructor MutantStack called" << RESET << std::endl;
	return ;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &rhs)
{
	if (*this != rhs)
		this->c.operator=(rhs);
	std::cout << CYAN <<"Assignment operator overloaded of MustantStack called" << RESET << std::endl;
	return (*this);
}

// *** ITERATOR ***

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

// *** CONST ITERATOR ***

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
	return (this->c.rend());
}