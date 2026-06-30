/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 22:58:48 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/30 23:19:46 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ScavTrap::attack(const std::string& target){

	if (_hitPoints < 1)
	{
		std::cout << "Scavtrap " << _name << " is destroyed and cannot attack." << std::endl;
	}
	else if (_energyPoints < 1)
	{
		std::cout << "Scavtrap " << "No energy points left." << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= 1;
		std::cout << "Scavtrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
	}
}