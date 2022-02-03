#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Need 3 parameters: [File to open] [String to replace] [Replacement string]" << std::endl;
		return 1;
	}

	std::ifstream ifs(av[1], std::ifstream::in);
	if (ifs)
	{
		int i = 0;
		std::stringstream buf;
		std::string s;
		std::string s1(av[1]);
		std::string s2(av[2]);
		std::string s3(av[3]);
		std::ofstream ofs((s1 + ".replace").c_str(), std::ofstream::out);

		if (!ofs)
		{
			ifs.close();
			std::cout << "Can't open " << s1 << ".replace" << std::endl;
			return 3;
		}
		buf << ifs.rdbuf();
		ifs.close();
		s = buf.str();
		while (s[i])
		{
			if (s2.length() && s.compare(i, s2.length(), s2) == 0)
			{
				s.erase(i, s2.length());
				s.insert(i, s3);
			}
			++i;
		}
		ofs << s;
		ofs.close();
	}
	else
	{
		std::cout << "Invalid File: " << av[1] << std::endl;
		return 2;
	}
	return 0;
}