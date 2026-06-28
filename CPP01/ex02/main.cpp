/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 22:52:25 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/17 23:24:55 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
#include <iostream>

int	main (void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << YELLOW << "Memory address of string: " << RESET << &str << std::endl;
	std::cout << YELLOW << "Memory address of stringPTR: " << RESET << stringPTR << std::endl;
	std::cout << YELLOW << "Memory address of stringREF: " << RESET << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "String value: " << RESET << str << std::endl;
	std::cout << GREEN <<"StringPTR value : " << RESET << *stringPTR << std::endl;
	std::cout << GREEN <<"StringREF value: " << RESET << stringREF << std::endl;
	
	return (0);
}