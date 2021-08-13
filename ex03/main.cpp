#include <iostream>
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap d1("Tony");

	d1.statusMassage();
	d1.attack("tire");
	d1.takeDamage(15);
	d1.statusMassage();
	d1.guardGate();
	d1.highFivesGuys();
}
