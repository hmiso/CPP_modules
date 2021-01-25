/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 05:48:30 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/25 14:06:57 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

#include <iostream>
#include <limits>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cfloat>

class Cast{
public:
	char	valueChar;
	int		valueInt;
	double	valueDouble;
	float	valueFloat;
	bool	sacsesConvertToChar;
	bool	sacsesConvertToInt;
	bool	sacsesConvertToDouble;
	bool	sacsesConvertToFloat;

	Cast();
	~Cast();
	Cast(Cast const &ptr);
	Cast &operator = (Cast const &ptr);
	bool convertToInt(long int value);
	bool convertToChar(long int value);
	bool convertToDouble(long int value, double value2);
	bool convertToFloat(long int value, double value2);
	void convertarg(char *ptr);
};

#endif