#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap{
	private:
	//Attributes
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_attack;
	public:
	//Constructors
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& copy);
	//Destructors
		virtual ~ClapTrap();
	//Overloads
		ClapTrap&	operator=(const ClapTrap& rhs);
	//Methods
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif