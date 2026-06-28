/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:41:21 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/17 22:21:42 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:

		std::string _name;

	public:

		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);

};

Zombie* zombieHorde (int N, std::string name);