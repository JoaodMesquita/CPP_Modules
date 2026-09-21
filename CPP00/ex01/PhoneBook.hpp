/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 21:53:34 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/16 14:58:02 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

#define YELLOW  "\033[33m"
#define GREEN    "\033[32m"
#define RESET   "\033[0m"
#define BLUE "\033[34m"
#define CYAN    "\033[36m"
#define RED     "\033[31m"

class PhoneBook
{
	private:
		Contact contacts[8];
		int index;
		int nbr_of_contacts;
	public:
		PhoneBook();
		~PhoneBook();
		void addNewContact();
		void displayContacts();
};

void	handleEOF();
