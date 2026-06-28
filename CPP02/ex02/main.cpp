/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 17:51:52 by joapedro          #+#    #+#             */
/*   Updated: 2026/06/26 15:13:34 by joapedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	/* Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
 */

 //--------------extra tests-----------------

	Fixed a;
	Fixed b(10);

	Fixed& c = Fixed::max(a, b); //c vai ser referencia para b (nao é uma cópia).
	c.setRawBits(0); //objeto pode ser alterado (nao é const).
	
	std::cout << &b << std::endl;
	std::cout << c << std::endl;
	std::cout << &c << std::endl;

	const Fixed d;
	const Fixed e(20); 

	//um obj const so pode chamar funcoes const
	const Fixed f = Fixed::max(d, e); //objeto nao pode ser modificado.
	
	std::cout << &e << std::endl;
	std::cout << f << std::endl;
	std::cout << &f << std::endl; //f é uma cópia do e -> endereco de memoria diferente.
	
	return 0;
}