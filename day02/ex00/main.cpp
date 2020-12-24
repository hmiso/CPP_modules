/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 11:52:25 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/24 16:47:05 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	Fixed(const Fixed &a)
	{
		std::cout << "Copy constructor called" << std::endl;
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
};

int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}