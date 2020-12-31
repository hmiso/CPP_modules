/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:01:33 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/28 16:18:49 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_a = 0;
	std::cout << "Default constructor called" << std::endl;
};
Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator = (Fixed const &a) 
{
	std::cout << "Assignation operator called" << std::endl;
	this->_a = a.getRawBits();
	return *this;
};
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _a;
};
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_a = raw;
};