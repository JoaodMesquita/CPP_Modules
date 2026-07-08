/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:39:08 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/08 11:52:44 by joapedro         ###   ########.fr       */
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
/* 	const Animal* Animals[SIZE];
	
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
/* 	Dog dog;
	Cat cat;

	dog.getBrain().setIdea(0, "sit");
	dog.getBrain().setIdea(1, "lay down");
	dog.getBrain().setIdea(2, "eat"); */
/* 
	cat.getBrain().setIdea(0, "talk");
	cat.getBrain().setIdea(1, "jump");
	cat.getBrain().setIdea(2, "sleep");
	 */
	
	//FOURTH TEST (Test deep copy)
	
	/* std::cout << "\n--------DEEP COPY TEST--------\n" << std::endl;
	Dog dog2;
	
	// copy assignment
	dog2 = dog;
	dog2.getBrain().setIdea(0, "happy");
	std::cout << std::endl;
	int size = 3;
	for (int i = 0; i < size; i++)
		std::cout << dog2.getBrain().getIdea(i) << std::endl;
	std::cout << std::endl;
		for (int i = 0; i < size; i++)
		std::cout << dog.getBrain().getIdea(i) << std::endl;
	std::cout << std::endl;
	std::cout << "dog2:" << &dog2.getBrain() << std::endl;
	std::cout << "dog:" <<&dog.getBrain() << std::endl;
	std::cout << std::endl;

	std::cout << dog2.getType() << std::endl;
	std::cout << cat.getType() << std::endl;
	std::cout << std::endl; */


/* 	Cat cat;
	Cat cat2;
	
	cat.getBrain().setIdea(0, "happy");
	cat.getBrain().setIdea(1, "mad");
	cat.getBrain().setIdea(2, "grumpy");
	
	cat2 = cat;
	cat2.getBrain().setIdea(1, "jumping");
	cat2.getBrain().setIdea(2, "breaking things");

	std::cout << std::endl;
	int size = 3;
	for (int i = 0; i < size; i++)
		std::cout << cat.getBrain().getIdea(i) << std::endl;
	std::cout << std::endl;
		for (int i = 0; i < size; i++)
		std::cout << cat2.getBrain().getIdea(i) << std::endl;
	std::cout << std::endl;
	std::cout << "cat: " << &cat.getBrain() << std::endl;
	std::cout << "cat2: " <<&cat2.getBrain() << std::endl;
	std::cout << std::endl;

	std::cout << cat.getType() << std::endl;
	std::cout << cat.getType() << std::endl;
	std::cout << std::endl; */
	

	// copy operator
/* 	Cat whiskers;
	whiskers.getBrain().setIdea(0, "I want to eat");
	
	Cat rufus(whiskers);
	rufus.getBrain().setIdea(1, "I want to sleep");

	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << "rufus: " << rufus.getBrain(). getIdea(i) << std::endl;
	std::cout << "\n" << "Rufus Brain: " << &rufus.getBrain() << std::endl;
	std::cout << "Whiskers Brain: " << &whiskers.getBrain() << "\n" << std::endl; */
	
	// filling ideas
/* 	Dog dog;

	for (int i = 0; i < 100; i++)
		dog.getBrain().setIdea(i, "idea");

	Dog copy(dog);

	for (int i = 0; i < 100; i++)
		std::cout << "[ " << i << " ]" << copy.getBrain().getIdea(i) << '\n'; */
	
	return 0;
}