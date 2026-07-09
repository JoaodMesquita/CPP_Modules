/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:01:03 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/01 19:01:47 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);

		void makeSound() const;
};