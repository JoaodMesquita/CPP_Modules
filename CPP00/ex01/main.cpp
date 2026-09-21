/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 22:38:25 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/16 14:59:34 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	menu(){

	std::string choice;

	std::cout << std::endl << YELLOW << "=================================\n"
	<< "        Awesome Phonebook\n"
	<< "=================================\n" << std::endl
	<< RESET<< "Available commands:\n" << std::endl
	<< "  ADD     Add a new contact\n"
	<< "  SEARCH  Search contacts\n"
	<< "  EXIT    Exit the program\n" << std::endl
	<< "> ";

	std::getline(std::cin, choice);
	handleEOF();
	return choice;
}

int	main(void){
	
	PhoneBook	phoneBook;
	std::string	option;
	
	while(1){
		option = menu();
		if (option == "ADD")
			phoneBook.addNewContact();
		else if (option == "SEARCH")
			phoneBook.displayContacts();
		else if (option == "EXIT")
			break;
		else
			std::cout << std::endl << RED << option << " is an invalid option!" << RESET << std::endl;
	}
	return (0);
}