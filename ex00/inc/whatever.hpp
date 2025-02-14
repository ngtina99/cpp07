/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:13:43 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/14 16:44:40 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> 
void	swap(T &valueA, T &valueB) {

	T valueTemp;
	valueTemp = valueA;
	valueA = valueB;
	valueB = valueTemp;

}

template <typename T>
T const &min(T const &value1, T const &value2) {
	return(value1 < value2 ? value1 : value2);
}

template <typename T> 
T const &max(T const &value1, T const &value2) {
	return(value1 > value2 ? value1 : value2);
}

#endif
