#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack() {};
	MutantStack(const MutantStack & newMutantStack) {
		if (this != &newMutantStack) {
			*this = newMutantStack;
		} 
	}
	~MutantStack() {};

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};

# endif // __MUTANTSTACK_HPP__