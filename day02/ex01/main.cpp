/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 17:54:25 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/25 14:34:47 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

class Fixed{
private:
	int _a;
	static const int _b = 8;
public:
	Fixed()
	{
		_a = 0;
		std::cout << "Default constructor called" << std::endl;
	};
	Fixed(int a)
	{
		_a = a << _b;
		std::cout << "Int constructor called" << std::endl;
	};
	Fixed(float a)
	{
		_a = roundf(a * (1 << _b));
		std::cout << "Float constructor called" << std::endl;
	};	
	Fixed(const Fixed &a)
	{
		std::cout << "Float constructor called" << std::endl;
		*this = a;
	}
	~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	}
	Fixed &operator = (Fixed const &a) 
	{
		std::cout << "Assignation operator called" << std::endl;
		_a = a.getRawBits();
		return *this;
	};
	int getRawBits( void ) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return _a;
	};
	void setRawBits( int const raw )
	{
		std::cout << "setRawBits member function called" << std::endl;
		_a = raw;
	};
	int toInt(void)
	{
		return _a;
	};
	float toFloat(void)
	{
		return _a;
	};
	std::ostream operator << (std::ostream &out)
	{
		out << 
	}
};


int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}