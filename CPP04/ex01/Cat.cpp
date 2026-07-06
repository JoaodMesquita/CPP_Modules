/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 17:27:36 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/06 13:41:01 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
};

Cat::~Cat(){

	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
};

Cat::Cat(const Cat& other) : Animal(other){

	std::cout << "Cat copy contructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
};

Cat& Cat::operator=(const Cat& other){

	std::cout << "Cat copy assignament operator called";
	if (this != &other)
		this->_type = other._type;
	return *this;
};

void Cat::makeSound() const{

	std::cout << "Meow meow" << std::endl;
};

Brain& Cat::getBrain(){

	return *this->_brain;
}