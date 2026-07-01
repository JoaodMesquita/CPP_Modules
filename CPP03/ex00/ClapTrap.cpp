/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 23:07:33 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/01 13:33:54 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << " has joined the battle" << std::endl;
}

ClapTrap:: ~ClapTrap()
{
	std::cout << "Game Over" << std::endl;
}

// Implementar copy operator and copy assignment

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

	if (_hitPoints < 1)
	{
		std::cout << _name << " was already destroyed." << std::endl;
		return ;
	}
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << _name << " was destroyed." << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << _name << " suffered " << amount << " points of damage.\n" << "HP left: " << _hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){

	if (_energyPoints == 0)
	{
		std::cout << "No energy points left." << std::endl;
		return ;
	}
	else if (_hitPoints < 1)
	{
		std::cout << _name << " is destroyed and cannot be repaired." << std::endl;
		return ;
	}
	_energyPoints --;

	unsigned int heal = amount;
	
	if (_hitPoints > UINT_MAX - heal)
			heal = UINT_MAX - _hitPoints;
	_hitPoints += heal;
	std::cout << _name << " earned " << amount << " HP points.\n" << "HP left: " << _hitPoints  << "\nEP left: "<< _energyPoints << std::endl;
}