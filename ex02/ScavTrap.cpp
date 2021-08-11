#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
	std::cout << "***ScavTrap <\x1b[34m" << this->Name << "\x1b[0m>"
														  " entered to Gate keeper mode***\n";
}

void ScavTrap::attack( std::string const &target ) {
	std::cout << "***" << this->Type << " <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " attacks his opponent <\x1b[35m" << target << "\x1b[0m>";
	std::cout << " dealing >>\x1b[36m" << this->AttackDamage << "\x1b[0m<< use laser***\n";
}

ScavTrap::ScavTrap() : ClapTrap() {
	this->Type = "ScavTrap";
	this->Name = "SC4V-TP";
	this->HitPoints = 100;
	this->MaxHP = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "***Default ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" becomes a ScavTrap***\n";
}

ScavTrap::ScavTrap( const std::string &name ) : ClapTrap("ScavTrap", name, 100, 50, 20) {
	std::cout << "***ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" becomes a ScavTrap***\n";
}

ScavTrap::ScavTrap( const ScavTrap &other ) {
	*this = other;
	std::cout << "***Clone ClapTrap with name <\x1b[34m" << other.Name << "\x1b[0m>"
		" becomes ScavTrap***\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "***ScavTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" is no longer ScavTrap***\n";
}

ScavTrap &ScavTrap::operator=( ScavTrap const &other ) {
	this->Type = other.Type;
	this->MaxHP = other.MaxHP;
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
