/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:43:57 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/02 12:16:50 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap(){

	std::cout << "ScavTrap destructor called" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){

	std::cout << "Copy contructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}


void ScavTrap::attack(const std::string& target){

	if (_hitPoints < 1)
	{
		std::cout << "ScavTrap " << _name << " is destroyed and cannot attack." << std::endl;
	}
	else if (_energyPoints < 1)
	{
		std::cout << "ScavTrap " << "No energy points left." << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= 1;
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
	}
}

void ScavTrap::guardGate(){

	std::cout << "ScavTrap is now in gate keeper mode." << std::endl;
}

std::string ScavTrap::getName(){
	
	return this->_name;
}