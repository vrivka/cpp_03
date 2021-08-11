#include <iomanip>
#include "ClapTrap.hpp"

void ClapTrap::attack( const std::string &target ) {
	std::cout << "***" << this->Type << " <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " attacks his opponent <\x1b[35m" << target << "\x1b[0m>";
	std::cout << " dealing >>\x1b[36m" << this->AttackDamage << "\x1b[0m<<***\n";
}

void ClapTrap::takeDamage( unsigned int amount) {
	std::cout << "***" << this->Type << " <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " take --\x1b[31m" << amount << "\x1b[0m-- damage***\n";
	if (this->HitPoints <= amount)
		this->HitPoints = 0;
	else
		this->HitPoints = this->HitPoints - amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "***" << this->Type << " <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " be repaired ++\x1b[32m" << amount << "\x1b[0m++ hit points***\n";
	this->HitPoints = this->HitPoints + amount >= this->MaxHP ? this->MaxHP : this->HitPoints + amount;
}

void ClapTrap::statusMassage() {
	std::cout << "***" << this->Type << " status <\x1b[34m" << this->Name << "\x1b[0m>***\n";
	std::cout << "->Hit points:\t\t\x1b[31m" << this->HitPoints << "\x1b[0m\n";
	std::cout << "->Energy points:\t\x1b[33m" << this->EnergyPoints << "\x1b[0m\n";
	std::cout << "->Attack damage:\t\x1b[36m" << this->AttackDamage << "\x1b[0m\n";
}

ClapTrap::ClapTrap() : Type("ClapTrap"), Name("CL4P-TP"), MaxHP(10), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "***Default ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " arrived***\n";
}

ClapTrap::ClapTrap( std::string const &name ) : Type("ClapTrap"), Name(name), MaxHP(10), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "***ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " crawled out from underground***\n";
}

ClapTrap::ClapTrap( std::string const &type, std::string const &name, unsigned int const &hp, unsigned int const &ep, int const &atk ) : Type(type), Name(name), MaxHP(hp), HitPoints(hp), EnergyPoints(ep), AttackDamage(atk) {
	std::cout << "***ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " crawled out from underground***\n";
}

ClapTrap::ClapTrap( ClapTrap const &other ) {
	*this = other;
	std::cout << "***Clone ClapTrap with name <\x1b[34m" << other.Name << "\x1b[0m>";
	std::cout << " came out of nowhere***\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "***Shelf life of ClapTrap <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " is out***\n";
}

ClapTrap &ClapTrap::operator=( ClapTrap const &other ) {
	this->Type = other.Type;
	this->MaxHP = other.MaxHP;
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
