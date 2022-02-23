#include <iostream>
#include "Array.hpp"

int main(void)
{
	{
		Array<bool> aBool;
		Array<bool> aBool2(20);
		Array<bool> aBool3(aBool2);

		std::cout << "aBool size: " << aBool.size() << std::endl;
		std::cout << "aBool2 size: " << aBool2.size() << std::endl;
		std::cout << "aBool3 size: " << aBool3.size() << std::endl;
		aBool = aBool2;
		std::cout << "Copying aBool2 in aBool..\naBool size: " << aBool.size() << std::endl;
	}
	{
		Array<int> aInt(10);

		for (size_t i = 0; i < 10; ++i)
			aInt[i] = i * i;
		try {
			std::cout << "\nNow trying to display the 20 first elements of aInt's array whereas aInt's array is size " << aInt.size() << ':' << std::endl;
			for (size_t i = 0; i < 20; ++i)
				std::cout << "aInt[" << i << "] = " << aInt[i] << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		Array<int> aInt2(aInt);

		for (size_t i = 0; i < 10; ++i)
			aInt[i] = i;
		
		try {
			std::cout << "\nNow trying to display the 20 first elements of aInt2's array whereas aInt2's array is size " << aInt2.size() << ':' << std::endl;
			for (size_t i = 0; i < 20; ++i)
				std::cout << "aInt2[" << i << "] = " << aInt2[i] << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}