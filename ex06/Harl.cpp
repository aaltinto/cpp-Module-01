#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Oh, no! It's Harl!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl pops out from existence";
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my"; 
	std::cout <<  " 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I just love it!" <<std::endl;
}
void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout <<  "You don't put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "; 
	std::cout << "I've been coming here for years and you just started working here last month.";
	std::cout << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	void	(Harl::* ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"debug", "info", "warning", "error"};
	i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	switch (i)
	{
		case 0:
			(this->*ptr_complain[i])();
			break ;
		case 1:
			(this->*ptr_complain[i])();
			break ;
		case 2:
			(this->*ptr_complain[i])();
			break ;
		case 3:
			(this->*ptr_complain[i])();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}