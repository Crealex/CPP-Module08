
#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutanStack
{
	private:
		std::stack<T> _stack;

	public:
		MutanStack();
		MutanStack(const MutanStack& cpy);
		~MutanStack();
		MutanStack &operator=(const MutanStack& rhs);
};

#endif
