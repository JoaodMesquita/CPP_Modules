/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:43:01 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/20 14:15:08 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "[HEAP]\n" << "Zombie created:" << std::endl;
	Zombie *zombie = newZombie("Spablob3");
	
	zombie->announce();
	delete zombie;
	
	std::cout << std::endl;
	
	std::cout <<"[STACK]\n" << "Zombie created:" << std::endl;
	randomChump("foo");
	
	return (0);
}