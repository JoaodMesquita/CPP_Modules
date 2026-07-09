/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:39:08 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/09 10:24:07 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define SIZE 10

int	main(void)
{
	Animal* animal = new Animal();
	Animal monkey;
	
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	
	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	return 0;
}