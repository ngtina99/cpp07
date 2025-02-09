/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:13:30 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/09 20:41:54 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

void	printJoao(int &c) {
	(void) c;
	std::cout << "LET'S GO <3" << std::endl;
}

int main( void ) {

	int array[5];
	size_t arrayLen = 6;
	
	iter(array, arrayLen, printJoao);
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// return 0;
}
