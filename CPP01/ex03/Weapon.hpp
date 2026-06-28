/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 11:26:29 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/18 15:47:24 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
	private:

		std::string _type;

	public:

		Weapon(std::string weapon);
		~Weapon();
		const std::string& getType();
		void setType(std::string type);
};