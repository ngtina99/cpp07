/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:19:28 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/09 20:42:05 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arrayAddress, size_t arrayLen, void(*arrayFunction)(T &)) {
	
	size_t	i = 0;
	
	while(i < arrayLen) {
		arrayFunction(arrayAddress[i]);
		i++;	
	}
}

#endif