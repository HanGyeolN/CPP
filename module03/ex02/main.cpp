#include "FragTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap	check_claptrap(ClapTrap ct)
{
	ct.meleeAttack("Target");
	ct.rangedAttack("Target");
	ct.takeDamage(10);
	ct.beRepaired(10);
	return (ct);	
}

FragTrap	check_fragtrap(FragTrap &ft)
{
	ft.meleeAttack("target");
	ft.rangedAttack("target");
	ft.takeDamage(20);
	ft.beRepaired(20);
	return (ft);
}

ScavTrap	&check_scavtrap(ScavTrap &st)
{
	st.meleeAttack("target");
	st.rangedAttack("target");
	st.takeDamage(20);
	st.beRepaired(20);
	return (st);
}

int		main(void)
{
	srand((unsigned int)clock());
	
	ClapTrap	ct("CT");
	ct = check_claptrap(ct);
	ct.beRepaired(100);
	
	std::cout << "--------------------------" << std::endl;

	FragTrap	ft("FT");
	ft = check_fragtrap(ft);
	ft.vaulthunter_dot_exe("Target");

	std::cout << "--------------------------" << std::endl;

	ScavTrap	st("ST");
	st = check_scavtrap(st);
	st.challengeNewcomer();
	
	return (0);
}