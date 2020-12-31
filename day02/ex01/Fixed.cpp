/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:28:34 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/28 16:31:15 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_a = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(int a)
{
	_a = a << _b;
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(float a)
{
	_a = roundf(a * (1 << _b));
	std::cout << "Float constructor called" << std::endl;
}	
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
	this->_a = a._a;
	return *this;
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _a;
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_a = raw;
}
int Fixed::toInt(void) const
{
	return _a >> _b;
}
float Fixed::toFloat(void) const
{
	return float(_a) / float(1 << _b);
}
std::ostream &operator << (std::ostream &out,const Fixed &a)
{
	out << a.toFloat();
	return (out);
}