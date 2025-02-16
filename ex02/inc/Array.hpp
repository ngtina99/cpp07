
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:47:40 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/05 00:48:42 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime>   // for time()

#define MYEOF "\033[0m"
#define MYRED "\033[1;31m"
#define MYBLUE "\033[1;34m"
#define MYGREEN "\033[1;32m"
#define MYPURPLE "\033[1;35m"

template <class T>
class Array {

	private:

		T		*_array;
		size_t	_size;	

	public:

		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array	&operator=(const Array &rhs);
		~Array();
	
		T		&operator[](const int i);
		const T	&operator[](const int i) const;
		unsigned int	size() const;

		class	IndexLimitException: public std::exception {
			
			public:

				const char *what() const throw();
			
		};
};

#include "Array.tpp"

#endif