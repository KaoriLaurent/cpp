#include "Harl.hpp"

Harl::Harl(void) { }

Harl::~Harl(void) { }

void	Harl::complain(std::string level)
{
	void	(Harl::*fctPtrArr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	level_of_complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (level == level_of_complain[i])
			break ;
	}
	switch (i)
	{
	case 0: (this->*fctPtrArr[0])();
	case 1: (this->*fctPtrArr[1])();
	case 2: (this->*fctPtrArr[2])();
	case 3: (this->*fctPtrArr[3])();
			break ;
	default: std::cout << "Everything is fine." << std::endl;
			std::cout << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cerr << "Debug:" << std::endl;
	std::cerr << "I love having extra bacon for my\n"
		"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
			<< std::endl;
	std::cerr << std::endl;
}

void	Harl::info(void)
{
	std::cerr << "Info:" << std::endl;
	std::cerr << "I cannot believe adding extra bacon costs more money.\n"
		"You didn’t put enough bacon in my burger!"
		" If you did, I wouldn’t be asking for more!"
			<< std::endl;
	std::cerr << std::endl;
}

void	Harl::warning(void)
{
	std::cerr << "Warning:" << std::endl;
	std::cerr << "I think I deserve to have some extra bacon for free.\n"
		"I’ve been coming for years whereas you started working here since last month."
			<< std::endl;
	std::cerr << std::endl;
}

void	Harl::error(void)
{
	std::cerr << "Error:" << std::endl;
	std::cerr << "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
	std::cerr << std::endl;
}
