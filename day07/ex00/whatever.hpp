/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:04:40 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/25 21:38:44 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template < typename T >
void swap( T & first, T & second)
{
	T temp = first;
	first = second;
	second = temp;
} 

template < typename T >
T min( T & first, T & second)
{
	if (first < second)
		return first;
	return second;
} 

template < typename T >
T max( T & first, T & second)
{
	if (first > second)
		return first;
	return second;
} 

#endif