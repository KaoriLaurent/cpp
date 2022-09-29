#include "ClapTrap.hpp"

//Constructors

ClapTrap::ClapTrap(void){
	_name = "ClappedTrapped";
	_health = 10;
	_energy = 10;
	_attack = 0;
	std::cout << _name << " has been defaultly manufactured." << std::endl;
}

ClapTrap::ClapTrap(const std::string name){
	_name = name;
	_health = 10;
	_energy = 10;
	_attack = 0;
	std::cout << _name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	_name = copy._name;
	_health = copy._health;
	_energy = copy._energy;
	_attack = copy._attack;
	std::cout << _name << " has undergone mitosis." << std::endl;
}

//Destructors

ClapTrap::~ClapTrap(){
	std::cout << _name << " has undergone deletion." << std::endl;
}

//Overloads

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs){
	_name = rhs._name;
	_health = rhs._health;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return *this;
}

//Methods

void	ClapTrap::attack(const std::string& target){
	if (_health && _energy){
		_energy -= 1;
		std::cout << _name << " deals " << _attack << " damage to " << target << "." << std::endl;
	}
	else{
		std::cout << _name << " is unable to fight !" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (!_health){
		std::cout << "Stop ! " << _name << " is already dead :(" << std::endl;
		return ;
	}
	if (_health > amount){
		_health -= amount;
		std::cout << _name << " takes " << amount << " damage." << std::endl;
	}
	else{
		_health = 0;
		std::cout << _name << " takes " << amount << " damage and just dies." << std::endl;
	}

}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_health && _energy){
		_energy -= 1;
		_health += amount;
		std::cout << _name << " regains " << amount << " health." << std::endl;
	}
	else if (!_health){
		std::cout << _name << " remains motionless." << std::endl;
	}
	else if (!_energy){
		std::cout << _name << " can't seem to find the strength to repair itself." << std::endl;
	}
}