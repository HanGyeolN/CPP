#include "FragTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap	&check_scavtrap(ScavTrap &ft)
{
	ft.meleeAttack("target");
	ft.rangedAttack("target");
	ft.takeDamage(20);
	ft.beRepaired(20);
	ft.challengeNewcomer();
	ft.challengeNewcomer();
	ft.challengeNewcomer();
	return (ft);
}

FragTrap	&check_fragtrap(FragTrap &ft)
{
	ft.meleeAttack("target");
	ft.rangedAttack("target");
	ft.takeDamage(20);
	ft.beRepaired(20);
	ft.vaulthunter_dot_exe("boss");
	ft.vaulthunter_dot_exe("boss");
	ft.vaulthunter_dot_exe("boss");
	ft.vaulthunter_dot_exe("boss");
	ft.vaulthunter_dot_exe("boss");
	return (ft);
}

int		main(void)
{
	srand((unsigned int)clock());
	FragTrap	claptrap("hna");
	FragTrap	copytrap;

	copytrap = check_fragtrap(claptrap);
	copytrap.meleeAttack("enermy");
	copytrap.vaulthunter_dot_exe("me");
	
	std::cout << "===========================" << std::endl;

	ScavTrap	scavtrap("SC4V");
	ScavTrap	copy;
	copy = check_scavtrap(scavtrap);
	copy.meleeAttack("enermy");
	copy.challengeNewcomer();
		
	return (0);
}