/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 10:46:45 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/20 11:08:59 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:

		Harl();
		~Harl();
		void complain(std::string level);
};

