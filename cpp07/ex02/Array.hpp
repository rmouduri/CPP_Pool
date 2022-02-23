#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <exception>
# include <stdlib.h>

template<typename T>
class Array
{
private:
	size_t	_size;
	T		*_array = NULL;
public:
	Array(): _size(0), _array(new T[_size]) {};
	Array(unsigned int size): _size(size), _array(new T[_size]) {};
	Array(Array & newArray): _size(newArray._size)
	{
		if (this->_array)
			delete this->_array;
		this->_array = new T[_size];
		for (size_t i = 0; i < this->_size; ++i)
			this->_array[i] = newArray._array[i];
	}
	~Array() { delete [] this->_array; };

	Array & operator=(Array & newArray)
	{
		this->_size = newArray._size;
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; ++i)
			this->_array[i] = newArray._array[i];
		return *this;
	}
	T & operator[](unsigned int i) throw(std::out_of_range)
	{
		if (i >= this->_size)
			throw std::out_of_range("out of range");
		return this->_array[i];
	}
	size_t size() { return this->_size; };
};

# endif // __ARRAY_HPP__