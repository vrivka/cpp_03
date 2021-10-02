#include <iostream>
#include "ClapTrap.hpp"

int main() {
	ClapTrap clap_1("Garry");
	std::cout << std::endl;
	ClapTrap clap_2;
	std::cout << std::endl;
	ClapTrap clap_3(clap_2);

	std::cout << std::endl;
	clap_1.attack("tire");
	std::cout << std::endl;
	clap_1.takeDamage(3);
	std::cout << std::endl;
	clap_1.statusMassage();
	std::cout << std::endl;
	clap_1.attack("tire");
	std::cout << std::endl;
	clap_1.takeDamage(10);
	std::cout << std::endl;
	clap_1.statusMassage();
	std::cout << std::endl;
	clap_1.attack("tire");
	std::cout << std::endl;
	clap_1.takeDamage(5);
	std::cout << std::endl;
	clap_1.statusMassage();
	std::cout << std::endl;
	clap_1.beRepaired(5);
	std::cout << std::endl;
	clap_1.attack("tire");
	std::cout << std::endl;
	clap_1.statusMassage();
	std::cout << std::endl;
	clap_1.beRepaired(6);
	std::cout << std::endl;
	clap_1.statusMassage();
	std::cout << std::endl;
}
