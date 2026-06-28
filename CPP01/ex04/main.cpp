/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:06:43 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/20 15:07:26 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replaceStr(std::string s1, std::string s2, std::string line){

	std::string result;
	int s1_len = s1.length();
	int pos = 0;
	size_t index = 0;
	while ((index = line.find(s1, pos)) != std::string::npos)
	{
		result += line.substr(pos, index - pos);
		result += s2;
		pos = index + s1_len;
	}
	result += line.substr(pos);
	return result;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: wrong number of arguments. Expected 3." << std::endl;
		return 1;
	}

	std::fstream inFile(av[1], std::ios::in);
	if (!inFile)
	{
		std::cerr << "Error: could not open file '" << av[1] << "'"<< std::endl;
		return 1;
	}
	inFile.seekg(0, std::ios::end);
	if (inFile.tellg() == 0)
	{
		std::cerr << "Error: file is empty."<< std::endl;
		return 1;
	}
	inFile.seekg(0, std::ios::beg);

	std::string fileName = av[1];
	std::string newFile = fileName.append(".replace");
	
	std::fstream outFile(newFile.c_str(), std::ios::out);
	if (!outFile)
	{
		std::cerr << "Error: could not open file '" << newFile << "'"<< std::endl;
		return 1;
	}
	
	std::string line;
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	if (s1[0] == '\0')
	{
		std::cerr << "Error: string can't be emtpy." << std::endl;
		return 1;
	}

	while (std::getline(inFile, line))
	{
		line = replaceStr(s1, s2, line);
		outFile << line << std::endl;
	}

	inFile.close();
	return (0);
}