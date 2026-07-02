/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 23:20:34 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/02 11:51:03 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap robot("Hanayama");
	
	for (int i = 0; i < 5; i++)
		robot.attack("Baki");
	for (int i = 0; i < 10; i++)
		robot.takeDamage(10);
	robot.beRepaired(10);
	robot.attack("Yuji");
	robot.guardGate();
	
	return 0;
}