#include "ScavTrap.hpp"

//Constructors

ScavTrap::ScavTrap(void){
	_name = "Scavved";
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << _name << " : Stand back, I'm beginning to scav." << std::endl;
}

ScavTrap::ScavTrap(const std::string name){
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << _name << " is now scavving." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy){
	_name = copy._name;
	_health = copy._health;
	_energy = copy._energy;
	_attack = copy._attack;
	std::cout << _name << " has undergone scavtosis." << std::endl;
}

//Destructors

ScavTrap::~ScavTrap(){
	std::cout << _name << " has succscavfully deleted itself." << std::endl;
}

//Overloads

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs){
	_name = rhs._name;
	_health = rhs._health;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return *this;
}

//Methods

void	ScavTrap::attack(const std::string& target){
	if (_health && _energy){
		_energy -= 1;
		std::cout << _name << " scavs " << _attack << " away from " << target << "." << std::endl;
	}
	else{
		std::cout << _name << " is unable to scav !" << std::endl;
	}
}

void	ScavTrap::guardGate(void){
	std::cout << _name << " is now guarding the gate." << std::endl;
}