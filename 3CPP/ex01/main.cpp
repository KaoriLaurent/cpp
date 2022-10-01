#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	std::cout << "Creation of DEFAULT CLAPTRAP !" << std::endl;
	ClapTrap	defClap;
	std::cout << std::endl;
	std::cout << "Now he is fighting a RANDOM BUG !" << std::endl;
	defClap.attack("Random bug");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	defClap.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	defClap.beRepaired(5);
	std::cout << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << "Creation of DEFAULT SCAVTRAP ! He is the GATE KEEPER" << std::endl;
	ScavTrap	defScav;
	defScav.guardGate();
	std::cout << std::endl;

	std::cout << "Now he is fighting a RANDOM BUG !" << std::endl;
	defScav.attack("Random bug");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	defScav.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	defScav.beRepaired(5);
	std::cout << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
	std::string		randomPainter("Michelangelo");

	std::cout << "Creation of ScavTrap with CUSTOM name : MICHELANGELO !! He is the 2nd GATE KEEPER" << std::endl;
	ScavTrap	customScav(randomPainter);
	customScav.guardGate();
	std::cout << std::endl;

	std::cout << "Now he is fighting a RANDOM CHICKEN !" << std::endl;
	customScav.attack("Random Chicken");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	customScav.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	customScav.beRepaired(5);
	std::cout << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << "In case of this one dies, we are going to CLONE him. This is the last GATE KEEPER" << std::endl;
	ScavTrap	cloneScav(customScav);
	cloneScav.guardGate();
	std::cout << std::endl;

	std::cout << "BUT THE CHICKEN ATTACKS CUSTOMSCAV IN RETURN !" << std::endl;
	customScav.takeDamage(100);
	std::cout << std::endl;

	std::cout << "Vengeance is mine, CLONE ! ATTACK THE CHICKEN !" << std::endl;
	cloneScav.attack("Chicken");
	std::cout << std::endl;

	std::cout << "Now, repaire our CUSTOMSCAV !" << std::endl;
	customScav.beRepaired(150);
	std::cout << "At lease they are good at something..." << std::endl << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
}