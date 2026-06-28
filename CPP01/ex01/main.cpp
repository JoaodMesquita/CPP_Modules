/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:34:46 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/17 22:40:41 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	int	nbr_of_zombies = 10;
	Zombie *horde = zombieHorde(nbr_of_zombies, "makelele");
	
	for (int i = 0; i < nbr_of_zombies; i++)
	{
		std::cout << "[" << i+1 << "] ";
		horde[i].announce();
	}	
	delete[] horde;
	return (0);
}