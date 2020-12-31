/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:24:15 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/28 16:32:40 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed{
private:
	int _a;
	static const int _b = 8;
public:
	Fixed();
	Fixed(int a);
	Fixed(float a);	
	Fixed(const Fixed &a);
	~Fixed();
	Fixed &operator = (Fixed const &a);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt(void) const;
	float toFloat(void) const;
};
std::ostream &operator << (std::ostream &out,const Fixed &a);
#endif