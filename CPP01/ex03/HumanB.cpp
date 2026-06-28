/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 11:26:19 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/18 16:08:14 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), weapon(NULL) {}

HumanB::~HumanB(){}

void HumanB::attack(){

	if (!weapon)
		std::cout << _name << " has no weapon." << std::endl;
	else
		std::cout << _name << " attacks with " <<  weapon->getType() << "." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){

	this->weapon = &weapon;
}