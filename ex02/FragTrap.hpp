#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	void highFivesGuys();
	FragTrap();
	~FragTrap();
	FragTrap( std::string const & );
	FragTrap( FragTrap const &);
	FragTrap &operator=( FragTrap const & );
};

#endif
