/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 11:26:17 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/18 15:42:56 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private:

		std::string _name;
		Weapon	&weapon;
	
	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};