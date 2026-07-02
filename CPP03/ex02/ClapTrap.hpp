/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 22:57:50 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/02 12:20:08 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>

class	ClapTrap
{
	protected:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:

		ClapTrap(const std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
};