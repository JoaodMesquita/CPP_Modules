/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:41:08 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/17 15:08:48 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	
	this->_name = name;
}

Zombie::~Zombie(void){
	
	std::cout << _name << " was destroyed!" << std::endl;
}

void Zombie::announce(void){

	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}