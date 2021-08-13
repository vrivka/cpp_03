#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string Name;
	unsigned HitPoints;
	unsigned MaxHP;
	unsigned EnergyPoints;
	unsigned MaxEP;
	int AttackDamage;
public:
	void attack( std::string const & );
	void takeDamage( unsigned int );
	void beRepaired( unsigned int );
	void statusMassage();
	ClapTrap();
	ClapTrap( std::string const & );
	ClapTrap( ClapTrap const & );
	~ClapTrap();
	ClapTrap &operator=( ClapTrap const & );
};


#endif
