/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:13:30 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/12 03:56:49 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>   // ✅ Required for srand() and rand()
#include <ctime>   // ✅ Required for time()
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << numbers[i] << " ";
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
// }
// #define MAX_VAL 750
// int main(int, char*2*)
// {

// 	// int* b = new int[5];
// 	// std::cout << b[0] << std::endl;
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
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



// #include "Array.tpp"
// #include <iostream>

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

// // Test main based on the one from github.com/aprahin
// int apra(void)
// {
// 	try
// 	{
// 		std::cout << "Array<int> arr(10)" << std::endl;
// 		Array<int>	arr(10);
// 		printArr(arr);

// 		std::cout << "Setting some value in the middle of it:" << std::endl;
// 		arr[7] = 6;
// 		arr[2] = 7;
// 		arr[5] = 21;
// 		arr[3] = 42;
// 		printArr(arr);

// 		std::cout << "Array<int> mirror = arr" << std::endl;
// 		Array<int>	mirror = arr;

// 		std::cout << "Size of original array: " << arr.size() << std::endl;
// 		std::cout << "Mirror array size: " << mirror.size() << std::endl;
// 		std::cout << "Printing mirror: " << std::endl;
// 		printArr(mirror);

// 		std::cout << "Array<std::string> stringArr(4)" << std::endl;
// 		Array<std::string>	stringArr(4);

// 		stringArr[0] = "Bonjour";
// 		stringArr[1] = "String";
// 		stringArr[2] = "Tableau";
// 		stringArr[3] = "Revenons au jeu";
// 		std::cout << "Printing string array: " << std::endl;
// 		printArr(stringArr);

// 		std::cout << "Trying to access an \"index out of bounds\"" << std::endl;
// 		std::cout << stringArr[4] << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << _RED << e.what() << _RESET << std::endl;
// 	}
// 	return (0);
// }

// // main given on the module 07 page
// #define MAX_VAL 750
// int given(void)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
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