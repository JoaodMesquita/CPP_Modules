/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:39:20 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/01 13:45:47 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal
{
	protected:
		
		std::string _type;
	
	public:
		
		Animal();
		~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual void makeSound();
}