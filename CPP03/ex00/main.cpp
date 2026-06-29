/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 23:20:34 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/29 16:03:15 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot("Vox_Machina");
	
	robot.attack("Dragon");
	robot.takeDamage(10);
	robot.attack("Orc");
	robot.beRepaired(1);

	return 0;
}