#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "span.hpp"

using std::vector;
using std::cout; using std::cerr;

vector<int> getRandomVector(size_t n, int max)
{
	vector<int> v(n);

	for (size_t i = 0; i < v.size(); ++i) {
		v[i] = rand() % (max + 1);
	}

	return v;
}

int main(int argc, char **argv)
{
	if (argc < 2 || argc > 3) {
		cerr << "Usage: ./span <size> <max_number>\n";
		return 1;
	}
	if (atoi(argv[1]) < 2) {
		cout << "Minimum size: 2\n";
		return 2;
	}

	srand(time(0));

	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}

	int max = argc == 3 ? atoi(argv[2]) : 42;

	vector<int> vec = getRandomVector(atoi(argv[1]), max);
	Span sp(atoi(argv[1]));

	sp.fill(vec.begin(), vec.end());

	for (std::vector<int>::const_iterator c = sp.getData().begin(); c != sp.getData().end(); ++c)
		std::cout << *c << ' ';
	std::cout << std::endl << std::endl;

	cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	cout << "longestSpan: " << sp.longestSpan() << std::endl;

	return 0;
}
