/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:19:28 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/16 18:30:04 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

#define MYEOF "\033[0m"
#define MYRED "\033[1;31m"
#define MYBLUE "\033[1;34m"
#define MYGREEN "\033[1;32m"
#define MYPURPLE "\033[1;35m"

template <typename T>
void	iter(T *arrayAddress, size_t arrayLen, void(*arrayFunction)(T &)) {

	size_t	i = 0;

	while(i < arrayLen) {
		arrayFunction(arrayAddress[i]);
		i++;
	}
}

#endif