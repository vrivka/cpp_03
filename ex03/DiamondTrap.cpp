#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI() {
	std::cout << "***Who am I? I'm a <\x1b[36m" << this->Name << "\x1b[0m>"
	" or I'm a <\x1b[32m" << ClapTrap::Name << "\x1b[0m>?***\n";
}

DiamondTrap::DiamondTrap() : ClapTrap(std::string("D14M0ND-TP") + "_clap_name", 100, 100, 30) {
	this->Name = "D14M0ND-TP";
	std::cout << "***\"It\" with name <\x1b[36m" << this->Name << "\x1b[0m>"
		" becomes a DiamondTrap***\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "***DiamondTrap with name <\x1b[36m" << this->Name << "\x1b[0m>"
		" is no longer DiamondTrap***\n";
}

DiamondTrap::DiamondTrap( std::string const &name ) : ClapTrap(name + "_clap_name", 100, 100, 30) {
	this->Name = name;
	std::cout << "***\"It\" with name <\x1b[36m" << this->Name << "\x1b[0m>"
	" becomes a DiamondTrap***\n";
}

DiamondTrap::DiamondTrap( DiamondTrap const &other ) : ClapTrap(other) {
	this->Name = other.Name;
	std::cout << "***Clone ClapTrap with name <\x1b[36m" << other.Name << "\x1b[0m>"
	" becomes DiamondTrap***\n";
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &other ) {
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->MaxHP = other.MaxHP;
	this->EnergyPoints = other.EnergyPoints;
	this->MaxEP = other.MaxEP;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
