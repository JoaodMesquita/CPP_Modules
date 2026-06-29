/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 22:57:50 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/29 14:26:37 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	ClapTrap
{
	private:

		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public:

		ClapTrap(const std::string name);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
};