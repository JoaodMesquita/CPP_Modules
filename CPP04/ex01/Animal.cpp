/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:47:09 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/06 10:46:50 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(){

	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other){

	std::cout << "Animal Copy contructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other){

	std::cout << "Animal Copy assignment constructor called" << std::endl;
	if (this != &other)
		this->_type  = other._type;
	return *this;
}

void Animal::makeSound() const {

	std::cout << "Animal makes weird sound..." << std::endl;
}

std::string Animal::getType() const{

	return _type;
}