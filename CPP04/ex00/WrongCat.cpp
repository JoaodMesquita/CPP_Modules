/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 17:27:36 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/01 19:06:39 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
};

WrongCat::~WrongCat(){

	std::cout << "WrongCat destructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){

	std::cout << "WrongCat copy contructor called" << std::endl;
	*this = other;
};

WrongCat& WrongCat::operator=(const WrongCat& other){

	std::cout << "WrongCat copy assignament contructor called";
	if (this != &other)
		this->_type = other._type;
	return *this;
};

void WrongCat::makeSound() const{

	std::cout << "Meow meow" << std::endl;
};