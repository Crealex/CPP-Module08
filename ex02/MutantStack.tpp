
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
	std::cout << CYAN <<"Assignment operator overloaded of MustantStack called" << RESET << std::endl;
	if (this != &rhs)
		this->c = rhs.c;
	return (*this);
	// ALTERNATIVE :
	// if (this != &rhs)
	// 	std::stack<T>::operator=(rhs);
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

template<typename T>
void MutantStack<T>::printMs()
{
	iterator it = this->begin();
	iterator ite = this->end();

	for (iterator i = it; i != ite; i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

}