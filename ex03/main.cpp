#include <iostream>
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap d1("Tony");

	std::cout << std::endl;
	d1.whoAmI();
	std::cout << std::endl;
	d1.statusMassage();
	std::cout << std::endl;
	d1.attack("tire");
	std::cout << std::endl;
	d1.takeDamage(15);
	std::cout << std::endl;
	d1.statusMassage();
	std::cout << std::endl;
	d1.guardGate();
	std::cout << std::endl;
	d1.highFivesGuys();
}
