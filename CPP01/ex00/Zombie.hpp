/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:42:48 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/17 14:15:17 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		
		std::string _name;
	
	public:
		
		Zombie(std::string name);
		~Zombie(void);
		
		void announce(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );