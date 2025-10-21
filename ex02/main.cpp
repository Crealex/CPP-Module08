#include "MutanStack.hpp"
#include <deque>

void test_deque()
{
	std::deque<int> dq;
	dq.push_back(5);
	dq.push_back(17);
	std::cout << *dq.begin() << std::endl;
	dq.pop_back();
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
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(dq);
}

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
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
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}