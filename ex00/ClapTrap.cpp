#include <iomanip>
#include "ClapTrap.hpp"

void ClapTrap::attack( const std::string &target ) {
	std::cout << "***ClapTrap <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " attacks his opponent <\x1b[35m" << target << "\x1b[0m>";
	std::cout << " dealing >>\x1b[36m" << this->AttackDamage << "\x1b[0m<<***; ";
	std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"Well, I tried!\"\n";
}

void ClapTrap::takeDamage( unsigned int amount) {
	std::cout << "***ClapTrap <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " take --\x1b[31m" << amount << "\x1b[0m-- damage***; ";
	if (this->HitPoints == 0)
		std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"Bzzzzzzt...\"\n";
	else if (this->HitPoints <= amount) {
		this->HitPoints = 0;
		std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"I'll be back...\"\n";
	}
	else {
		this->HitPoints = this->HitPoints - amount;
		std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"Why do I even feel pain?!\"\n";
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "***ClapTrap <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " be repaired ++\x1b[32m" << amount << "\x1b[0m++ hit points***; ";
	if (this->HitPoints == 0)
		std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"I'm... alive? I AM ALIVE!!!\"\n";
	else
		std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"You are ace high!\"\n";
	this->HitPoints = this->HitPoints + amount >= 10 ? 10 : this->HitPoints + amount;
}

void ClapTrap::statusMassage() {
	std::cout << "***ClapTrap status <\x1b[34m" << this->Name << "\x1b[0m>***\n";
	std::cout << "*\tHit points:\t\t\x1b[31m" << this->HitPoints << "\x1b[0m\t\t*\n";
	std::cout << "*\tEnergy points:\t\x1b[33m" << this->EnergyPoints << "\x1b[0m\t\t*\n";
	std::cout << "*\tAttack damage:\t\x1b[36m" << this->AttackDamage << "\x1b[0m\t\t*\n";
	std::cout << std::setfill('*') << std::setw(30) << "\n";
}

ClapTrap::ClapTrap() : Name("CL4P-TP"), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "***Default ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " arrived***; ";
	std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"I'm default and I now it!\"\n";
}

ClapTrap::ClapTrap( std::string const &name ) : Name(name),  HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "***ClapTrap with name <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " crawled out from underground***; ";
	std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"Ready to go on where you are, friend!\"\n";
}

ClapTrap::ClapTrap( ClapTrap const &other ) {
	*this = other;
	std::cout << "***Clone ClapTrap with name <\x1b[34m" << other.Name << "\x1b[0m>";
	std::cout << " came out of nowhere***; ";
	std::cout << "<\x1b[34m" << this->Name << "\x1b[0m>: \"I? No, it's you a clone!\"\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "***Shelf life of ClapTrap <\x1b[34m" << this->Name << "\x1b[0m>";
	std::cout << " is out***\n";
}

ClapTrap &ClapTrap::operator=( ClapTrap const &other ) {
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return *this;
}
