/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:34:27 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/02 12:18:17 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){

	std::cout << "FragTrap constructor called" << std::endl;
	
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap(){

	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){

	std::cout << "Copy contructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other){

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		FragTrap::operator=(other);
	return *this;
}

void FragTrap::attack(const std::string& target){

	if (_hitPoints < 1)
	{
		std::cout << "Fragtrap " << _name << " is destroyed and cannot attack." << std::endl;
	}
	else if (_energyPoints < 1)
	{
		std::cout << "Fragtrap " << "No energy points left." << std::endl;
		return ;
	}
	else
	{
		_energyPoints -= 1;
		std::cout << "Fragtrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
	}
}

void FragTrap::highFivesGuys(void){

	std::cout << "FragTrap " << _name << " wants a high five!" << std::endl;
}

std::string FragTrap::getName(){
	
	return this->_name;
}