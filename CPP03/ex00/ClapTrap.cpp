/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 23:07:33 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/29 16:03:56 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap:: ~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){

	if (_hitPoints < 1)
	{
		std::cout << _name << " is destroyed and cannot attack." << std::endl;
	}
	else if (_energyPoints < 1)
	{
		std::cout << "No energy points left." << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= 1;
		std::cout << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){

	if (_hitPoints > 1)
	{
		_hitPoints -= amount;
		std::cout << _name << " suffered " << amount << " points of damage.\n" << "HP left: " << _hitPoints << std::endl;
		if (_hitPoints < 1)
		{
			std::cout << _name << " has died." << std::endl;
			return ;
		}
	}
	else
		std::cout << _name << " is already dead." << std::endl;
	
}
void ClapTrap::beRepaired(unsigned int amount){

	if (_hitPoints < 1)
	{
		std::cout << _name << " is destroyed and cannot be repaired." << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "No energy points left." << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << _name << " earned " << amount << " HP points.\n" << "HP left: " << _hitPoints << std::endl;
	}
}