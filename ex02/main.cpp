#include <iostream>
#include "FragTrap.hpp"

int main() {
	FragTrap f1;
	std::cout << std::endl;
	FragTrap f2("Eugene");
	std::cout << std::endl;
	FragTrap f3(f1);

	std::cout << std::endl;
	f1.attack("rock");
	std::cout << std::endl;
	f2.attack("bushes");
	std::cout << std::endl;
	f3.takeDamage(50);
	std::cout << std::endl;
	f1.statusMassage();
	std::cout << std::endl;
	f2.statusMassage();
	std::cout << std::endl;
	f3.statusMassage();
	std::cout << std::endl;
	f1.highFivesGuys();
	std::cout << std::endl;
	f2.highFivesGuys();
	std::cout << std::endl;
	f3.highFivesGuys();
	std::cout << std::endl;
}
