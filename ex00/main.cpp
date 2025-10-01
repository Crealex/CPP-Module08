
#include "easyfind.hpp"

int main(void)
{

	// ---------- LIST ----------
	std::list<int> list;

	list.push_back(5);
	list.push_back(4);
	list.push_back(42);
	list.push_back(666);

	std::cout << BOLD << "*** TRY WITH A LIST ***" << RESET << std::endl;
	std::cout << "List: " << std::endl;
	::printContainer(list);
	try
	{
		std::cout << "try to find 5" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(list, 5) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << "try to find 1" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(list, 1) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	// ---------- VECTOR ----------

	std::vector<int> vect;

	vect.push_back(9);
	vect.push_back(42);
	vect.push_back(6);
	vect.push_back(9);
	vect.push_back(667);
	std::cout << BOLD << "*** TRY WITH A VECTOR ***" << RESET << std::endl;
	std::cout << "vect: " << std::endl;
	::printContainer(vect);
	try
	{
		std::cout << "try to find 5" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(vect, 5) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << "try to find 42" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(vect, 42) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	// ---------- DEQUE ----------

	std::deque<int> deq;

	deq.push_back(1);
	deq.push_back(3);
	deq.push_back(6);
	deq.push_back(999);
	deq.push_back(666);
	std::cout << BOLD << "*** TRY WITH A DEQUE ***" << RESET << std::endl;
	std::cout << "deq: " << std::endl;
	::printContainer(deq);
	try
	{
		std::cout << "try to find 3" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(deq, 3) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << "try to find 42" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(deq, 42) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}


	// ---------- CONST VECTOR ----------

	const std::vector<int> vect_c(5, 42);

	std::cout << BOLD << "*** TRY WITH A CONST VECTOR ***" << RESET << std::endl;
	::printContainer(vect_c);
	try
	{
		std::cout << "try to find 5" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(vect_c, 5) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << "try to find 42" << std::endl;
		std::cout << GREEN << "Result: " << *easyfind(vect_c, 42) << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
}