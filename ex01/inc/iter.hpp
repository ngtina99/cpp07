/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:19:28 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/05 00:43:32 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arrayAddress, size_t arrayLen, void(*arrayFunction)(T &)) {
	
	int	i = 0;
	
	while(i < arrayLen) {
		arrayFunction(arrayAddress[i]);
		i++;	
	}
}

#endif