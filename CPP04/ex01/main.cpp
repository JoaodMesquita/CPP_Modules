/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:39:08 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/06 13:57:00 by joapedro         ###   ########.fr       */
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
	//FIRST TEST (NO LEAKS)
	/* const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i; */

	//SECOND TEST (ARRAY OF ANIMALS)
	/* const Animal* Animals[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		if (i < SIZE / 2)
		{
			std::cout << "Dog[" << i << "]" << std::endl;
			Animals[i] = new Dog();
		}
		else
		{
			std::cout << "Cat[" << i << "]" << std::endl;
			Animals[i] = new Cat();
		}
	}

	for (int i = 0; i < SIZE; i++)
		delete Animals[i]; */

	//THIRD TEST (SETTING IDEAS)
	Dog dog;
	Cat cat;

	dog.getBrain().setIdea(0, "sit");
	dog.getBrain().setIdea(1, "lay down");
	dog.getBrain().setIdea(2, "eat");

	cat.getBrain().setIdea(0, "talk");
	cat.getBrain().setIdea(1, "jump");
	cat.getBrain().setIdea(2, "sleep");
	
	int size = 3;

	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << cat.getBrain().getIdea(i) << std::endl;
		std::cout << dog.getBrain().getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
}