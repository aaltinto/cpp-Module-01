#include <iostream>
#include <fstream>

void	replace(std::string s1, std::string s2)
{
	s1.compare()
}

int main(int ac, char   **argv)
{
	if (ac != 4)
		return (std::cout << "usage <filename> <s1> <s2>" << std::endl, 1);

	std::string		copyfile;
	std::string		line;
	std::ifstream	file(argv[1]);
	if (!file.is_open())
		return (std::cout << "Failed to open " << argv[1], 1);
	while (std::getline(file, line))
	{
		copyfile.append(line);
		copyfile.append("\n");
	}
	std::cout << copyfile << std::endl;

}