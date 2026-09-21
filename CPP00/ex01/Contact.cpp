/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 20:08:58 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/15 18:42:45 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName(){
	
	return (this->firstName);
}
std::string Contact::getLastName(){

	return (this->lastName);
}
std::string Contact::getNickName(){

	return (this->nickName);
}
std::string Contact::getPhoneNumber(){

	return (this->phoneNumber);
}
std::string Contact::getDarkestSecret(){

	return (this->darkestSecret);
}


void	Contact::setFirstName(std::string input){

	this->firstName = input;
}

void	Contact::setLastName(std::string input){

	this->lastName = input;
}

void	Contact::setNickName(std::string input){

	this->nickName = input;
}

void	Contact::setPhoneNumber(std::string input){
	
	this->phoneNumber = input;
}

void Contact::setDarkestSecret(std::string input){

	this->darkestSecret = input;
}
