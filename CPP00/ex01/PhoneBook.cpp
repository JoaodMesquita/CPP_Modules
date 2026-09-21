/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 20:08:54 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/16 15:01:12 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	
	index = 0;
	nbr_of_contacts = 0;
}

PhoneBook::~PhoneBook(){

}

void	handleEOF(){

	if (std::cin.eof())
	{
		std::cout << std::endl;
		exit(0);
	}
}

static void	printError(const std::string error){
	
	std::cout << RED << "\nError: " << error << " field cannot be empty." << RESET << std::endl;
}

void	PhoneBook::addNewContact(){

	std::string input;

	if (index == 8)
		index = 0;

	std::cout << std::endl;
	while (input.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, input);
		handleEOF();
		if (input.empty())
			printError("First name"); 
	}

	contacts[index].setFirstName(input);
	input.clear();
	
	while (input.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		handleEOF();
		if (input.empty())
			printError("Last name");
	}

	contacts[index].setLastName(input);
	input.clear();
	
	while (input.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		handleEOF();
		if (input.empty())
			printError("Nickname");
	}

	contacts[index].setNickName(input);
	input.clear();
	
	while (input.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		handleEOF();
		if (input.empty())
			printError("Phone number");
	}

	contacts[index].setPhoneNumber(input);
	input.clear();
	
	while (input.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		handleEOF();
		if (input.empty())
			printError("Darkest secret");
	}

	contacts[index].setDarkestSecret(input);
	
	if (nbr_of_contacts < 8)
		nbr_of_contacts++;
	index++;
	
	std::cout <<std::endl << GREEN << "Contact added successfully!" << std::endl;
}

std::string	truncate(std::string str){

	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return(str);
}

static void	searchContact(Contact contacts[], int nbr_of_contacts){

	int	index;
	const char	*str;
	std::string	input;
	
	std::cout << "\nEnter contact index:\n\n> ";
	std::getline(std::cin, input);
	handleEOF();
	str = input.c_str();
	
	for (int i = 0; str[i]; i++)
	{
		if(!isdigit(str[i]))
		{
			std::cout << RED << "\nInvalid index" << std::endl;
			return;
		}
		else
			index = atoi(str);
	}

	if (index >= 0 && index < nbr_of_contacts)
	{
		std::cout << CYAN << "\nFirst name: " << RESET << contacts[index].getFirstName() << std::endl;
		std::cout << CYAN << "Last name: " << RESET << contacts[index].getLastName() << std::endl;
		std::cout << CYAN << "Nickname: " << RESET << contacts[index].getNickName() << std::endl;
		std::cout << CYAN << "Phone number: " << RESET << contacts[index].getPhoneNumber() << std::endl;
		std::cout << CYAN << "Darkest secret: " << RESET << contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << RED << "\nInvalid index" << std::endl;
}

void	PhoneBook::displayContacts(){

	if (nbr_of_contacts < 1)
	{
		std::cout << RED << "\nPhonebook is empty!\n";
		return ;
	}
	
	std::cout << std::endl << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < nbr_of_contacts; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].getNickName());
		std::cout << std::endl;
	}
	searchContact(contacts, nbr_of_contacts);
}