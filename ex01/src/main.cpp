/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:13:30 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/17 20:29:35 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

template <typename T>
void	printArrayContent(T &c) {
	std::cout << "Array content: " << MYBLUE << c << MYEOF << std::endl;
}

int main( void ) {

	int arrayInt[5] = {1, 2, 3, 4, 5};
	float arrayFloat[5] = {1.1, std::numeric_limits<float>::infinity(), 2.2, 4.3, 6.0};
	double arrayDouble[5] = {3, std::numeric_limits<double>::infinity(), 99999.98, 42, std::numeric_limits<double>::max()};
	char arrayChar[5] = {'C', 'H', 'A', 'R', 'S'};
	std::string arrayString[5] = {"It's", "an", "array", "of", "strings"};


	size_t arrayIntLen = sizeof(arrayInt) / sizeof(arrayInt[0]);
	size_t arrayFloatLen = sizeof(arrayFloat) / sizeof(arrayFloat[0]);
	size_t arrayDoubleLen = sizeof(arrayDouble) / sizeof(arrayDouble[0]);
	size_t arrayCharLen = sizeof(arrayChar) / sizeof(arrayChar[0]);
	size_t arrayStringLen = sizeof(arrayString) / sizeof(arrayString[0]);

	std::cout << MYPURPLE << "*test with an INTEGER array*" << MYEOF << std::endl;
	iter(arrayInt, arrayIntLen, printArrayContent);
	std::cout << MYPURPLE << "*test with a FLOAT array*" << MYEOF << std::endl;
	iter(arrayFloat, arrayFloatLen, printArrayContent);
	std::cout << MYPURPLE << "*test with a DOUBLE array*" << MYEOF << std::endl;
	iter(arrayDouble, arrayDoubleLen, printArrayContent);
	std::cout << MYPURPLE << "*test with a CHAR array*" << MYEOF << std::endl;
	iter(arrayChar, arrayCharLen, printArrayContent);
	std::cout << MYPURPLE << "*test with a STRING array*" << MYEOF << std::endl;
	iter(arrayString, arrayStringLen, printArrayContent);

}
