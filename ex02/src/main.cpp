/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:13:30 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/16 21:01:02 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#define MAX_VAL 10

int main() {

	srand(time(NULL));
	std::cout << MYPURPLE << "Test 1: Default constructor with empty array: " << MYEOF << std::endl;
	Array<int> arr1;
	std::cout << "Size of arr1: " << arr1.size() << std::endl;

	std::cout << MYPURPLE << "Test 1 - Constructor with size n: " << MYEOF << std::endl;
	Array<int> arr2(5);
	std::cout << "Size of arr2: " << arr2.size() << std::endl;
	for (size_t i = 0; i < arr2.size(); i++) {
		arr2[i] = rand();
	}
	std::cout << "arr2 elements: ";
	for (size_t i = 0; i < arr2.size(); i++) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;

	std::cout << MYPURPLE << "Test 3 - Copy constructor: " << MYEOF << std::endl;
	Array<int> arr3(arr2);
	std::cout << "Size of arr3 (copy): " << arr3.size() << std::endl;
	std::cout << "arr3 elements: ";
	for (size_t i = 0; i < arr3.size(); i++) {
		if (arr2[i] != arr3[i]) {
			std::cerr << MYRED "Error: didn't copy the same value" MYEOF << std::endl;
			return (1);
		}
		std::cout << arr3[i] << " ";
	}
	std::cout << std::endl;

	std::cout << MYPURPLE << "Test 4 - Copy assignment operator: " << MYEOF << std::endl;
	Array<int> arr4 = arr3;
	arr4 = arr2;
	std::cout << "Size of arr4 (after assignment): " << arr4.size() << std::endl;
	std::cout << "arr4 elements: ";
	for (size_t i = 0; i < arr4.size(); i++) {
		if (arr4[i] != arr3[i]) {
			std::cerr << MYRED "Error: didn't assign the same value" MYEOF << std::endl;
			return (1);
		}
		std::cout << arr4[i] << " ";
	}
	std::cout << std::endl;
	try {
		std::cout << MYPURPLE << "Test 5 - Index operator: " << MYEOF << std::endl;
        std::cout << "arr4[4]: " << arr4[4] << std::endl;
        std::cout << "arr4[5]: " << arr4[5] << std::endl;
	}
	catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
	std::cout << MYGREEN "PASSED" MYEOF << std::endl;
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
// 		std::cout << numbers[i] << " "; //it prints the random value inside
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         std::cout << numbers[i] << " "; //it prints the random value inside
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     std::cout << std::endl;
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }




// int	apra(void);
// int	given(void);

// int main(int ac, char **av)
// {
// 	if (ac == 2 && av[1][0] == 'a')
// 		apra();
// 	else
// 		given();
// 	return (0);
// }
