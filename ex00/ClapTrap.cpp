#include <iomanip>
#include "ClapTrap.hpp"

void ClapTrap::attack( const std::string &target ) {
	if (this->HitPoints == 0)
		std::cout << "***ClapTrap <\x1b[32m" << this->Name << "\x1b[0m> is dead to attack!***\n";
	else if (this->EnergyPoints == 0)
		std::cout << "***ClapTrap <\x1b[32m" << this->Name << "\x1b[0m> not enough energy to attack!***\n";
	else
		std::cout << "***ClapTrap <\x1b[32m" << this->Name << "\x1b[0m>"
		" attacks his opponent <\x1b[35m" << target << "\x1b[0m>"
		" dealing >>\x1b[36m" << this->AttackDamage << "\x1b[0m<< and spand $\x1b[33m1\x1b[0m$ energy points***\n";
	if (this->EnergyPoints > 0)
		this->EnergyPoints = this->EnergyPoints - 1;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "***ClapTrap <\x1b[32m" << this->Name << "\x1b[0m>"
	" take --\x1b[31m" << amount << "\x1b[0m-- damage***\n";
	if (this->HitPoints <= amount)
		this->HitPoints = 0;
	else
		this->HitPoints = this->HitPoints - amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "***ClapTrap <\x1b[32m" << this->Name << "\x1b[0m>"
	" be repaired ++\x1b[32m" << amount << "\x1b[0m++ hit points and energy points***\n";
	this->HitPoints = this->HitPoints + amount >= this->MaxHP ? this->MaxHP : this->HitPoints + amount;
	this->EnergyPoints = this->EnergyPoints + amount >= this->MaxEP ? this->MaxEP : this->EnergyPoints + amount;
}

void ClapTrap::statusMassage() {
	std::cout << "*****ClapTrap status <\x1b[32m" << this->Name << "\x1b[0m>*****\n"
	"*\tHit points:\t\x1b[31m" << this->HitPoints << "\x1b[0m\t*\n"
	"*\tEnergy points:\t\x1b[33m" << this->EnergyPoints << "\x1b[0m\t*\n"
	"*\tAttack damage:\t\x1b[36m" << this->AttackDamage << "\x1b[0m\t*\n"
	<< std::setfill('*') << std::setw(34) << "\n";
}

ClapTrap::ClapTrap() : Name("CL4P-TP"), HitPoints(10), MaxHP(10), EnergyPoints(10), MaxEP(10), AttackDamage(0) {
	std::cout << "***Default ClapTrap with name <\x1b[32m" << this->Name << "\x1b[0m>";
	std::cout << " arrived***\n";
}

ClapTrap::ClapTrap( std::string const &name ) : Name(name),  HitPoints(10), MaxHP(10), EnergyPoints(10), MaxEP(10), AttackDamage(0) {
	std::cout << "***ClapTrap with name <\x1b[32m" << this->Name << "\x1b[0m>";
	std::cout << " crawled out from underground***\n";
}

ClapTrap::ClapTrap( ClapTrap const &other ) : Name(other.Name), HitPoints(other.HitPoints), MaxHP(other.MaxHP), EnergyPoints(other.EnergyPoints), MaxEP(other.MaxEP), AttackDamage(other.AttackDamage) {
	std::cout << "***Clone ClapTrap with name <\x1b[32m" << other.Name << "\x1b[0m>";
	std::cout << " came out of nowhere***\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "***Shelf life of ClapTrap <\x1b[32m" << this->Name << "\x1b[0m>";
	std::cout << " is out***\n";
}

ClapTrap &ClapTrap::operator=( ClapTrap const &other ) {
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->MaxHP = other.MaxHP;
	this->EnergyPoints = other.EnergyPoints;
	this->MaxEP = other.MaxEP;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
