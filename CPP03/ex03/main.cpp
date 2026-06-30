/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 23:20:34 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/30 15:47:35 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap robot("GGC20");

	robot.attack("Manhanzitos");
	robot.takeDamage(50);
	robot.beRepaired(2);
	robot.highFivesGuys();
	
	return 0;
}