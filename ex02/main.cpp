#include "MutantStack.hpp"
#include <deque>
#include <list>

void test_deque()
{
	std::cout << BOLD << "*** TEST WITH DEQUE CONTAINER ***" << RESET
			  << std::endl;
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

void test_list()
{
	std::cout << BOLD << "*** TEST WITH LIST CONTAINER ***" << RESET << std::endl;
	std::list<int> dq;
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
	dq.push_back(0);
	std::list<int>::iterator it = dq.begin();
	std::list<int>::iterator ite = dq.end();
	++it;
	--it;
	std::cout << "print all the container: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::list<int> s(dq);
}
void canonical_test()
{
	std::cout << BOLD << "*** CANONICAL TESTS ***" << RESET << std::endl;
	MutantStack<double> mstack;
	MutantStack<double> mstack2;

	mstack.push(12.2);
	mstack.push(1.4);
	mstack.push(3.2);
	mstack.push(42.42);
	mstack.push(66.6);
	mstack.push(9);
	std::cout << "first mstack: " << std::endl;
	mstack.printMs();
	MutantStack<double> mstack_cpy(mstack);
	std::cout << "mstack_copy: " << std::endl;
	mstack_cpy.printMs();
	std::cout << "mstack2:" << std::endl;
	mstack2.printMs();
	std::cout << "mstack2 = mstack" << std::endl;
	mstack2 = mstack;
	std::cout << "mstack2:" << std::endl;
	mstack2.printMs();
	std::cout << "adding 56.65 to mstack2..." << std::endl;
	mstack2.push(56.65);
	std::cout << "mstack2:" << std::endl;
	mstack2.printMs();
	std::cout << "first mstack: " << std::endl;
	mstack.printMs();
}

void test_ms_string()
{
	std::cout << BOLD << "*** TEST OPERATIONS OF MUTANTSTACK WITH STRING" << RESET << std::endl;
	MutantStack<std::string> mstack;
	std::string s1 = "pipou";
	std::string s2 = "pipon";
	std::string s3 = "pipo";
	std::string s4 = "pipol";
	std::string s5 = "pipasse";
	std::string s6 = "pipox";
	mstack.push(s1);
	mstack.push(s2);
	std::cout << "print top: ";
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "print size: ";
	std::cout << mstack.size() << std::endl;
	mstack.push(s3);
	mstack.push(s4);
	mstack.push(s5);
	mstack.push(s6);
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "print all the container: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<std::string> s(mstack);
}

int main()
{
	canonical_test();
	std::cout << BOLD << "*** TEST OPERATIONS OF MUTANTSTACK with int ***" << RESET << std::endl;
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
	test_deque();
	test_list();
	test_ms_string();
	return 0;
}
