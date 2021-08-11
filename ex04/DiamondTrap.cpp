#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->Type = "DiamondTrap";
	this->Name = "D14M0ND-TP";
	ClapTrap::Name = std::string("D14M0ND-TP") + "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->MaxHP = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "***Default ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" becomes a DiamondTrap***\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "***DiamondTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" is no longer DiamondTrap***\n";
}

DiamondTrap::DiamondTrap( std::string const &name ) {
	this->Type = "DiamondTrap";
	this->Name = name;
	ClapTrap::Name = name + "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->MaxHP = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "***ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>"
		" becomes a DiamondTrap***\n";
}

DiamondTrap::DiamondTrap( DiamondTrap const &other ) {
	*this = other;
	std::cout << "***Clone ClapTrap with name <\x1b[34m" << other.Name << "\x1b[0m>"
		" becomes DiamondTrap***\n";
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &other ) {
	this->Type = other.Type;
	this->MaxHP = other.MaxHP;
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
