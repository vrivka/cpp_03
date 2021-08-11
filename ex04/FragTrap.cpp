#include "FragTrap.hpp"

void FragTrap::highFivesGuys() {
	std::cout << "***FragTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" get High Five***\n";
}

FragTrap::FragTrap() : ClapTrap() {
	this->Type = "FragTrap";
	this->Name = "FR4G-TP";
	this->HitPoints = 100;
	this->MaxHP = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "***Default ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" becomes a FragTrap***\n";
}

FragTrap::~FragTrap() {
	std::cout << "***FragTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" is no longer FragTrap***\n";
}

FragTrap::FragTrap( std::string const &name ) : ClapTrap("FragTrap", name, 100, 100, 30) {
	std::cout << "***ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" becomes a FragTrap***\n";
}

FragTrap::FragTrap( FragTrap const &other) {
	*this = other;
	std::cout << "***Clone ClapTrap with name <\x1b[34m" << other.Name << "\x1b[0m>"
		" becomes FragTrap***\n";
}

FragTrap &FragTrap::operator=( FragTrap const &other ) {
	this->Type = other.Type;
	this->MaxHP = other.MaxHP;
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
