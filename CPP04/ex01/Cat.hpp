/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 17:02:28 by joapedro          #+#    #+#             */
/*   Updated: 2026/07/06 13:39:34 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain* _brain;

	public:

		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);

		void makeSound() const;

		Brain& getBrain(void);
};