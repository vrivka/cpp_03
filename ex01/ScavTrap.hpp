#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	void attack( std::string const & );
	void guardGate();
	ScavTrap();
	~ScavTrap();
	ScavTrap( std::string const & );
	ScavTrap( ScavTrap const & );
	ScavTrap &operator=( ScavTrap const & );

	void attack();
};


#endif
