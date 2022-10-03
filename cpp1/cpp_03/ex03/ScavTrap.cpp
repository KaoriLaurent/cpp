#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("noname", 100, 50, 20)
{
	std::cout << "ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap::ClapTrap(other)
{
	std::cout << "ScavTrap_Copy constructed" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructed" << std::endl;
}
/* --------------------------------------------------------------------------------- */
ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}
/* `````````````````````````````````````````````````````````````````````````````````` */
void	ScavTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " 
		<< target << ", causing " << this->attack_damage << " points of damage!" 
		<< std::endl;
		this->energy_points--;
	}
	else
	{
		std::cout << this->name << " can't attack! Peace " << target << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
