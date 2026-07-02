/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 23:07:33 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/02 12:16:02 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap:: ~ClapTrap()
{
	std::cout << "Claptrap descructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){

	std::cout << "Copy contructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){

	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->_name  = other._name;
		this->_hitPoints =	other._hitPoints;
		this->_energyPoints	= other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
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

std::string ClapTrap::getName(){
	
	return this->_name;
}