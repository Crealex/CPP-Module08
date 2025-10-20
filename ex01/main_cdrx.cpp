#include <climits>
#include <ctime>
// #include <vector>
#include <list>
#include <deque>
#include "Span.hpp"

void subject_test()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main(void)
{
	Span smallSp = Span(7);
	Span bigSp = Span(1000);
	Span hugeSp = Span(150000);
	std::srand(time(NULL));

	std::cout << GREEN << "Hello and welcome to our testing a span class." << std::endl;
	std::cout << std::endl << BLUE << "Let's start with the test provided in the subject" << RESET << std::endl;
	subject_test();
	std::cout << std::endl << BLUE << "Satisfied? Not really! Let's keep going with another small span of size 7" << RESET << std::endl;
	try
	{
		smallSp.addNumber(5);
		smallSp.addNumber(7);
		smallSp.addNumber(8);
		smallSp.addNumber(1000);
		smallSp.addNumber(1001);
		smallSp.addNumber(1602);
		smallSp.addNumber(1984);
	}
	catch(const std::exception &oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}
	std::cout << "Shortest span: " << smallSp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << smallSp.longestSpan() << std::endl;

	std::cout << std::endl << BLUE << "What happens if we try to add a number to this already full span?" << RESET << std::endl;
	try
	{
		smallSp.addNumber(28);
	}
	catch(const std::exception &oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}

	std::cout << std::endl << BLUE << "Now, let's take a slightly bigger span of size 1000 and not fill it completely" << RESET << std::endl;
	for (int i = 0; i < 957; ++i)
		bigSp.addNumber(std::rand());
//	std::cout << "Content of the span:" << std::endl;
//	std::cout << bigSp << std::endl;
	std::cout << "Shortest span: " << bigSp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << bigSp.longestSpan() << std::endl;

	std::cout << std::endl << BLUE << "What if we now tried to add 100 more numbers to this span?" << RESET << std::endl;
	try
	{
		std::vector<int> v;
		for (int i = 0; i < 100; ++i)
			v.push_back(std::rand());
		bigSp.addNumbers(v.begin(), v.end());
	}
	catch (const std::exception &oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}

	std::cout << std::endl << BLUE << "That didn't work, did it? Let's now add 10 numbers via a vector container" << RESET << std::endl;
	try
	{
		std::vector<int> v;
		for (int i = 0; i < 10; ++i)
			v.push_back(std::rand());
		bigSp.addNumbers(v.begin(), v.end());
	}
	catch (const std::exception &oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}
	std::cout << "Shortest span: " << bigSp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << bigSp.longestSpan() << std::endl;

	std::cout << std::endl << BLUE << "All is well, let's now add 10 numbers via a list container" << RESET << std::endl;
	try
	{
		std::list<int> l;
		for (int i = 0; i < 10; ++i)
			l.push_back(std::rand());
		bigSp.addNumbers(l.begin(), l.end());
	}
	catch (const std::exception &oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}
	std::cout << "Shortest span: " << bigSp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << bigSp.longestSpan() << std::endl;

	std::cout << std::endl << BLUE << "And what about 20 numbers in a deque container" << RESET << std::endl;
	try
	{
		std::deque<int> d;
		for (int i = 0; i < 20; ++i)
			d.push_back(std::rand());
		bigSp.addNumbers(d.begin(), d.end());
	}
	catch (const std::exception &oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}
	std::cout << "Shortest span: " << bigSp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << bigSp.longestSpan() << std::endl;

	std::cout << std::endl << BLUE << "Okay, but the likelihood of the shortest span and the longest span changing with our rand is not very high. Let's test this manually now." << RESET << std::endl;
	try
	{
		bigSp.addNumber(1);
		bigSp.addNumber(2);
		bigSp.addNumber(INT_MAX);
	}
	catch (const std::exception &oor)
	{
		std::cerr << RED << oor.what() << std::endl;
	}
	std::cout << "Shortest span: " << bigSp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << bigSp.longestSpan() << std::endl;

	std::cout << std::endl << BLUE << "Okay, and now for the very very big span." << RESET << std::endl;
	try
	{
		std::list<int> l;
		for (int i = 0; i < 150000; ++i)
			l.push_back(std::rand());
		hugeSp.addNumbers(l.begin(), l.end());
	}
	catch (const std::exception &oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}
//	std::cout << "Content of the span:" << std::endl;
//	std::cout << hugeSp << std::endl;
	std::cout << "Shortest span: " << hugeSp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << hugeSp.longestSpan() << std::endl;

	std::cout << std::endl << GREEN << "And that concludes today's testing, thanks for joining!" << RESET << std::endl;
}