#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
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
protected:
	std::string Type;
	std::string Name;
	unsigned HitPoints;
	unsigned MaxHP;
	unsigned EnergyPoints;
	unsigned AttackDamage;
	ClapTrap( std::string const &, std::string const &, unsigned const &, unsigned const &, int const & );
};

#endif
