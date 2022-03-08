#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T & v, int val)
{
	return std::find(v.begin(), v.end(), val);
}

#endif
