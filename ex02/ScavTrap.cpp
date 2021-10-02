#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
	std::cout << "***ScavTrap <\x1b[34m" << this->Name << "\x1b[0m>"
	" entered to Gate keeper mode***\n";
}

void ScavTrap::attack( std::string const &target ) {
	if (this->HitPoints == 0)
		std::cout << "***ScavTrap <\x1b[34m" << this->Name << "\x1b[0m> is dead to attack!***\n";
	else if (this->EnergyPoints == 0)
		std::cout << "***ScavTrap <\x1b[34m" << this->Name << "\x1b[0m> not enough energy to attack!***\n";
	else
		std::cout << "***ScavTrap <\x1b[34m" << this->Name << "\x1b[0m>"
		" attacks his opponent <\x1b[35m" << target << "\x1b[0m>"
		" with \x1b[31mlaser\x1b[0m and dealing >>\x1b[36m" << this->AttackDamage << "\x1b[0m<< and spand $\x1b[33m2\x1b[0m$ energy points***\n";
	if (this->EnergyPoints > 0)
		this->EnergyPoints = this->EnergyPoints - 2;
}

ScavTrap::ScavTrap() : ClapTrap("SC4V-TP", 100, 50, 20) {
	std::cout << "***Default ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
	" becomes a ScavTrap***\n";
}

ScavTrap::ScavTrap( const std::string &name ) : ClapTrap(name, 100, 50, 20) {
	std::cout << "***ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
	" becomes a ScavTrap***\n";
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other) {
	std::cout << "***Clone ClapTrap with name <\x1b[34m" << other.Name << "\x1b[0m>"
	" becomes ScavTrap***\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "***ScavTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
	" is no longer ScavTrap***\n";
}

ScavTrap &ScavTrap::operator=( ScavTrap const &other ) {
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->MaxHP = other.MaxHP;
	this->EnergyPoints = other.EnergyPoints;
	this->MaxEP = other.MaxEP;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
