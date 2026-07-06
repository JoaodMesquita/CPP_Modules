/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 10:35:43 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/06 12:33:21 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	protected:

		std::string ideas[100];
	
	public:

		Brain();
		~Brain();
		Brain(const Brain& other);
		//Brain& operator=(const Brain& other);

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index);
};

#endif