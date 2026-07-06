/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 17:55:24 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/06 13:41:16 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
};

Dog::~Dog(){

	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
};

Dog::Dog(const Dog& other) : Animal(other){

	std::cout << "Dog copy contructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
};

Dog& Dog::operator=(const Dog& other){

	std::cout << "Dog copy assignament operator called";
	if (this != &other)
		this->_type = other._type;
	return *this;
};

void Dog::makeSound() const{

	std::cout << "Woof Woof!" << std::endl;
};

Brain& Dog::getBrain(){

	return *this->_brain;
}