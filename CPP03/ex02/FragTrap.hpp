/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:33:02 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/02 12:17:41 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap(const std::string& name);
		~FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		
		void attack(const std::string& target);
		void highFivesGuys(void);
		std::string getName();
};