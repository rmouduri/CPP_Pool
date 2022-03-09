#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

using std::vector;
using std::list;
using std::cout;

int main(void)
{
	vector<int> v(10);

	for (size_t i = 0; i != v.size(); ++i)
		v[i] = i;

	vector<int>::iterator it = ::easyfind(v, 7);

	cout << "Found " << *it << " at index " << (it - v.begin()) << std::endl;

	it = ::easyfind(v, -10);

	if (it == v.end()) {
		cout << "I couldn't find -10" << std::endl;
	} else {
		cout << "I found -10" << std::endl;
	}

	return 0;
}
