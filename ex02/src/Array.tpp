/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:57:29 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/05 01:16:08 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "../inc/Array.hpp"

template <typename T>
class Array;

template <typename T>
Array<T>::Array() : array( new T[0] ){
}

template <typename T>
Array<T>::~Array() {
}

template <typename T>
Array<T>::Array(unsigned int n) : array(n){
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs) {
	return ;
}

template <typename T>
Array<T>:: Array(const Array &copy) {
	cop
}

#endif