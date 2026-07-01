/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:47:09 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/01 13:52:50 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){

	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(){

	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other){

	std::cout << "Copy contructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other){

	
}