#include <iostream>
#include "FragTrap.hpp"

int main() {
	FragTrap f1;
	FragTrap f2("Eugene");
	FragTrap f3(f1);

	f1.attack("rock");
	f2.attack("bushes");
	f3.takeDamage(50);
	f1.statusMassage();
	f2.statusMassage();
	f3.statusMassage();
	f1.highFivesGuys();
	f2.highFivesGuys();
	f3.highFivesGuys();
}
