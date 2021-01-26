/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:59:51 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/26 15:39:37 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string.h>

template < typename T >
void iter(T *mas, int len, void (*f)(T const &))
{
	int i = 0;
	while (i < len)
	{
		f(mas[i]);
		i++;
	}
}

#endif