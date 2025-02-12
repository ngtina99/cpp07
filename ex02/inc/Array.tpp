/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngtina1999 <ngtina1999@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:57:29 by ngtina1999        #+#    #+#             */
/*   Updated: 2025/02/12 03:50:43 by ngtina1999       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <class T>
Array<T>::Array() : _array(new T[0]), _size(0) {
}

template <class T>
Array<T>::~Array() {
	delete [] (this->_array);
}

template <class T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {
}

template <class T>
Array<T> &Array<T>::operator=(const Array &rhs) {

	//if (src.size() != 0) TEST THIS
	if (this !=&rhs) {
		this->_size = rhs._size;
		if (this->_array != NULL)
			delete [] (this->_array);
		this->_array = new T[this->_size];
		for ( int i = 0; i < rhs._size; i++ )
			this->_array[i] = rhs._array[i];
		// this->_type = rhs._type;
		// delete (this->_brain);
		// this->_brain = new Brain(*(rhs._brain));
	}
	return(*this);

}

template <class T>
Array<T>:: Array(const Array &copy) : _array(new T[copy._size]), _size(copy._size) {
	
	for( size_t i = 0; i < copy._size; i++ )
		this->_array[i] = copy._array[i];
	
}

// • Elements can be accessed through the subscript operator: [ ].

// When accessing an element with the [ ] operator, if its index is out of bounds, an
// std::exception is thrown.
template <class T>
T &Array<T>::operator[](const int i) const{
	if (i >= static_cast<int>(this->_size) || i < 0)
		throw (IndexLimitException());
	return(this->_array[i]);
}

template <class T>
unsigned int	Array<T>::size() const {
	return(this->_size);
}

template <class T>
const char *Array<T>::IndexLimitException::what() const throw() {
	return(MYRED "Error: Index out of bonds" MYEOF);
}

#endif