#ifndef CPP_03_DIAMONDTRAP_HPP
#define CPP_03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string Name;
public:
	void whoAmI();
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap( std::string const & );
	DiamondTrap( DiamondTrap const & );
	DiamondTrap &operator=( DiamondTrap const & );
};


#endif
