/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 09:35:58 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/27 10:42:55 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &array, int value)
{
	typename T::iterator ptr;
	if (array.end() == (ptr = (std::find(array.begin(), array.end(), value))))
		throw std::exception();
	return ptr;
}

#endif