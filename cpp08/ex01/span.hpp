#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <stdexcept>
# include <vector>
# include <iostream>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _data;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const & rhs);
		~Span(void);

		class isFullException: public std::exception {
			char const * what(void) const throw();
		};

		Span & operator=(Span const & rhs);

		void addNumber(int i) throw (isFullException);
		void fill(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) throw (isFullException);

		size_t shortestSpan(void) const;
		size_t longestSpan(void) const;

		std::vector<int> const & getData(void) const;
};

#endif // __SPAN_HPP__