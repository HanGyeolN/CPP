#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

	std::cout << "--------------------------" << std::endl;

	NinjaTrap	nt("NT");
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(ct);
	nt.ninjaShoebox(nt);

	std::cout << "--------------------------" << std::endl;
	
	SuperTrap	sp("SP");
	sp.meleeAttack("MA60");
	sp.rangedAttack("RA20");
	sp.ninjaShoebox(nt);
	sp.vaulthunter_dot_exe("target");
	return (0);
}