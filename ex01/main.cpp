#include <iostream>
#include "ScavTrap.hpp"

int main() {
	ScavTrap s1;
	ScavTrap s3("Frog");

	s1.guardGate();
	s1.attack("tire");
	s3.attack("bush");
	s1.takeDamage(13);
	s3.takeDamage(0);
	s1.beRepaired(3);
	ScavTrap s2("Leak");
	s1.beRepaired(3);
	s1.statusMassage();
	s2.statusMassage();
	s2.attack("rock");
	s2.takeDamage(200);
	s2.beRepaired(101);
	s3.beRepaired(1);
	s1 = s3;
	s3.takeDamage(15);
	s1.attack("bush");
	s1.statusMassage();
	s3.statusMassage();
	s1.guardGate();
	s2.guardGate();
	s3.guardGate();
}
