/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:54:11 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/08 11:54:01 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){

	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::~Brain(){

	std::cout << "Brain was destroyed" << std::endl;
}
	
Brain::Brain(const Brain& other){

	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other){

	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "idea index must be within ideas range (100)" << std::endl;
}

std::string Brain::getIdea(int index){

	return this->ideas[index];
}