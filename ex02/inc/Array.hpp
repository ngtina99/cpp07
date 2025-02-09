
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
#include "../src/Array.tpp"

template <class T>
class Array {

	private:

		T *array;

	public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array &copy);
	Array &operator=(const Array &rhs);

};


#endif