#include <iostream>
#include <stdint.h>
#include "Data.hpp"

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

int main(void)
{
	Data *data = new Data('U', 42, 42.42, 42.042, "Quarante-deux");

	std::cout << std::endl << *data << std::endl;

	uintptr_t uptr = serialize(data);

	std::cout << uptr << std::endl;

	Data *data2 = deserialize(uptr);

	std::cout << std::endl << *data2 << std::endl;

	delete data;
	return 0;
}