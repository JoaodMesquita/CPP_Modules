/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:43:57 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/30 15:14:01 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap(){

	std::cout << "Scavtrap destructor called" << std::endl;

}

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

void ScavTrap::guardGate(){

	std::cout << "Scavtrap is now in gate keeper mode." << std::endl;
}
