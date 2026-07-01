/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:47:09 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/01 19:02:48 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){

	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){

	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){

	std::cout << "Copy contructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){

	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &other)
		this->_type  = other._type;
	return *this;
}

void WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal makes weird sound..." << std::endl;
}

std::string WrongAnimal::getType() const{

	return _type;
}