/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 22:13:45 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/15 18:42:10 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#define MAX_CONTACTS 8
#define YELLOW  "\033[33m"
#define GREEN    "\033[32m"
#define RESET   "\033[0m"
#define RED     "\033[31m"

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void setFirstName(std::string input);
		void setLastName(std::string input);
		void setNickName(std::string input);
		void setPhoneNumber(std::string input);
		void setDarkestSecret(std::string input);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};
