/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 10:46:10 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/20 11:00:39 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Harl;

	if (ac != 2)
	{
		std::cerr << "Error: wrong number of arguments. Expected 1." << std::endl;
		return 1;
	}
	Harl.complain(av[1]);
	return (0);
}