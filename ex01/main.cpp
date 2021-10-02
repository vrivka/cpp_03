#include <iostream>
#include "ScavTrap.hpp"

int main() {
	ScavTrap s1;
	std::cout << std::endl;
	ScavTrap s3("Frog");

	std::cout << std::endl;
	s1.guardGate();
	std::cout << std::endl;
	s1.attack("tire");
	std::cout << std::endl;
	s3.attack("bush");
	std::cout << std::endl;
	s1.takeDamage(13);
	std::cout << std::endl;
	s3.takeDamage(0);
	std::cout << std::endl;
	s1.beRepaired(3);
	std::cout << std::endl;

	ScavTrap s2("Leak");

	std::cout << std::endl;
	s1.beRepaired(3);
	std::cout << std::endl;
	s1.statusMassage();
	std::cout << std::endl;
	s2.statusMassage();
	std::cout << std::endl;
	s2.attack("rock");
	std::cout << std::endl;
	s2.takeDamage(200);
	std::cout << std::endl;
	s2.beRepaired(101);
	std::cout << std::endl;
	s3.beRepaired(1);
	std::cout << std::endl;
	s1 = s3;
	s3.takeDamage(15);
	std::cout << std::endl;
	s1.attack("bush");
	std::cout << std::endl;
	s1.statusMassage();
	std::cout << std::endl;
	s3.statusMassage();
	std::cout << std::endl;
	s1.guardGate();
	std::cout << std::endl;
	s2.guardGate();
	std::cout << std::endl;
	s3.guardGate();
	std::cout << std::endl;
}
