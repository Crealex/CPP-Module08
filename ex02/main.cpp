#include "MutantStack.hpp"
#include <deque>

void test_deque()
{
	std::deque<int> dq;
	dq.push_back(5);
	dq.push_back(17);
	std::cout << "print back: ";
	std::cout << dq.back() << std::endl;
	dq.pop_back();
	std::cout << "print size: ";
	std::cout << dq.size() << std::endl;
	dq.push_back(3);
	dq.push_back(5);
	dq.push_back(737);
	//[...]
	dq.push_back(0);
	std::deque<int>::iterator it = dq.begin();
	std::deque<int>::iterator ite = dq.end();
	++it;
	--it;
	std::cout << "print all the container: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(dq);
}

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "print top: ";
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "print size: ";
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "print all the container: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	std::cout << BOLD << "*** TEST WITH DEQUE CONTAINER ***" << RESET << std::endl;
	test_deque();
	return 0;
}