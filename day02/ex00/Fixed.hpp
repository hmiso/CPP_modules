/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:59:03 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/28 16:02:23 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int _a;
	static const int _b = 8;
public:
	Fixed();
	Fixed(const Fixed &a);
	~Fixed();
	Fixed &operator = (Fixed const &a);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif