/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:39:20 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/09 10:14:08 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		
		std::string _type;
	
	public:
		
		Animal();
		virtual ~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif