/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 11:26:26 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/18 12:06:16 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){

	this->_type = type;
}

Weapon::~Weapon(){

}

const std::string& Weapon::getType(){

	return _type;
}

void Weapon::setType(std::string type){

	this->_type = type;
}