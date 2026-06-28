/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:55:08 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/17 22:29:14 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde (int N, std::string name){

	Zombie *newZombie = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		newZombie[i].setName(name);
	return (newZombie);
}