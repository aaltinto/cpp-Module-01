#include <iostream>
#include <fstream>

int	replace(std::string copyfile, char **argv)
{
	std::ofstream	outfile;
	int				index;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)copyfile.size(); i++)
	{
		index = copyfile.find(argv[2], i);
		if (index != -1 && i == index)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << copyfile[i];
	}
	outfile.close();
	return (0);
}

int main(int ac, char   **argv)
{
	if (ac != 4)
		return (std::cout << "usage: <filename> <s1> <s2>" << std::endl, 1);

	std::string		copyfile;
	std::string		line;
	std::ifstream	file(argv[1]);
	if (!file.is_open())
		return (std::cout << "Failed to open " << argv[1], 1);
	if (std::getline(file, line))
		copyfile.append(line);
	while (std::getline(file, line))
	{
		copyfile.append("\n");
		copyfile.append(line);
	}
	return (replace(copyfile, argv));
}