/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 17:56:19 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/01 17:56:39 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

		void makeSound() const;
};