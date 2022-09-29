#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
	//Constructors
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& copy);
	//Destructors
		~ScavTrap();
	//Overloads
		ScavTrap&	operator=(const ScavTrap& rhs);
	//Methods
		void	attack(const std::string& target);
		void	guardGate();
};

#endif