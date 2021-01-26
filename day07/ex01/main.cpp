/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:11:17 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/26 15:41:00 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template < typename S>
void inckrement(S &ptr)
{
	std::cout << ptr + 1;
}

void char_upper(char const &ptr)
{
	if (ptr >= 97 && ptr <= 122)
	{
		std::cout << (char)(ptr - 32);
	}
}

int main()
{
	char ptr[] = "hello world";
	int	 mas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	iter(ptr, (int)strlen(ptr), char_upper);
	std::cout << std::endl;
	iter(mas, 9, inckrement);
	std::cout << std::endl;
}



// class Awesome
// {
// public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x )
// {
// 	std::cout << x << std::endl;
// 	return;
// }

// int main()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }