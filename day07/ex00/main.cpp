/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:11:09 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/26 15:12:24 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <cstring>
#include <cstdlib>
#include <iomanip>

// class Awesome {
// public:
// 	Awesome( int n ) : _n( n ) {}
// 	bool operator==( Awesome const & rhs ) const
// 	{
// 		return (this->_n == rhs._n); 
// 	}
// 	bool operator!=( Awesome const & rhs ) const
// 	{
// 		return (this->_n != rhs._n);
// 	}
// 	bool operator>( Awesome const & rhs ) const
// 	{
// 		return (this->_n > rhs._n);
// 	}
// 	bool operator<( Awesome const & rhs ) const 
// 	{
// 		return (this->_n < rhs._n);
// 	}
// 	bool operator>=( Awesome const & rhs ) const 
// 	{
// 		return (this->_n >= rhs._n);
// 	}
// 	bool operator<=( Awesome const & rhs ) const {
// 		return (this->_n <= rhs._n);
// 	}
// 	int get_value() const{
// 		return this->_n;
// 	}
// private:
// 	int _n;
// };

// std::ostream &operator << (std::ostream &stream,  Awesome const &ptr){
// 	stream << ptr.get_value();
// 	return stream;
// }

int main()
{
	int a = 21;
	int b = 41;
	double c = 21.0;
	double d = 41.0;
	char e = 'H';
	char f = 'E';
	std::cout << "****SWAP****" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "c = " << c << std::fixed << std::setprecision(1) << std::endl;
	std::cout << "d = " << d << std::fixed << std::setprecision(1) << std::endl;
	swap(c, d);
	std::cout << "c = " << c << std::fixed << std::setprecision(1) << std::endl;
	std::cout << "d = " << d << std::fixed << std::setprecision(1) << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	swap(e, f);
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "************" << std::endl;
	std::cout << std::endl;
	std::cout << "****MIN*****" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min is " << min(a, b) << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "c = " << c << std::fixed << std::setprecision(1) << std::endl;
	std::cout << "d = " << d << std::fixed << std::setprecision(1) << std::endl;
	std::cout << "min is " << min(c, d) << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "min is " << min(e, f) << std::endl;	
	std::cout << "************" << std::endl;	
	std::cout << std::endl;
	std::cout << "****MAX*****" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max is " << max(a, b) << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "c = " << c << std::fixed << std::setprecision(1) << std::endl;
	std::cout << "d = " << d << std::fixed << std::setprecision(1) << std::endl;
	std::cout << "max is " << max(c, d) << std::endl;
	std::cout << "************" << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "max is " << max(e, f) << std::endl;	
	std::cout << "************" << std::endl;
	std::cout << std::endl;

	std::cout << "*Subject test*" << std::endl;
	std::cout << std::endl;

	int aa = 2;
	int bb = 3;
	::swap( aa, bb );
	std::cout << "a = " << aa << ", b = " << bb << std::endl;
	std::cout << "min( a, b ) = " << ::min( aa, bb ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( aa, bb ) << std::endl;
	std::string cc = "chaine1";
	std::string dd = "chaine2";
	::swap(cc, dd);
	std::cout << "c = " << cc << ", d = " << dd << std::endl;
	std::cout << "min( c, d ) = " << ::min( cc, dd ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( cc, dd ) << std::endl;
	std::cout << std::endl;


	// std::cout << "*Checklist test*" << std::endl;

	// Awesome ptr1(21);
	// Awesome ptr2(41);
	// ::swap( ptr1, ptr2 );
	// std::cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << std::endl;
	// std::cout << "min( ptr1, ptr2 ) = " << ::min( ptr1, ptr2 ) << std::endl;
	// std::cout << "max( ptr1, ptr2 ) = " << ::max( ptr1, ptr2 ) << std::endl;
	return 0;
}
