/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 23:20:34 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/02 11:24:21 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot("Vox_Machina");
	ClapTrap robot1(robot);
	ClapTrap robot2("Golem");
	
	robot = robot2;
	
	std::cout << "\nCOPY CONSTRUCTOR AND COPY ASSIGNEMENT TESTS" << std::endl;
	std::cout << "Name: " << robot.getName() << std::endl;
	std::cout << "Name: " << robot1.getName() << "\n" << std::endl;

	robot.attack("Dragon");
	robot.takeDamage(8);
	robot.takeDamage(1);
	robot.attack("Orc");
	robot.beRepaired(1);
	robot.beRepaired(5);
	robot.beRepaired(3);
	robot.beRepaired(6);
	robot.takeDamage(10);
	robot.beRepaired(4294967295);
	robot.beRepaired(1);
	robot.attack("Elf");
	robot.beRepaired(1);
	
	return 0;
}