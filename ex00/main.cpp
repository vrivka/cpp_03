#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap clap_1("Garry");
	ClapTrap clap_2;
	ClapTrap clap_3(clap_2);

	clap_1.attack("tire");
	clap_1.takeDamage(3);
	clap_1.statusMassage();
	clap_1.attack("tire");
	clap_1.takeDamage(10);
	clap_1.statusMassage();
	clap_1.takeDamage(5);
	clap_1.statusMassage();
	clap_1.beRepaired(5);
	clap_1.statusMassage();
	clap_1.beRepaired(5);
	clap_1.statusMassage();
}
