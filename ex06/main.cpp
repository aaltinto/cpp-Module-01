#include "Harl.hpp"

int main(int ac, char **argv)
{
	if (ac == 1)
	{
		std::cout << "usage: ./harl <complain level>" << std::endl;
		std::cout << "levels: debug, info, warning, error" << std::endl;
		return (1);
	}
	Harl H;
	H.complain(std::string(argv[1]));
}