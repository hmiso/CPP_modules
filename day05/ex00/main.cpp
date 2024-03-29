/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:29:47 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:22:39 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("Bill", 0);
		std::cout << b;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b("Bill", 151);
		std::cout << b;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b("Bill", 150);
		std::cout << b;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b2("jon", 150);
	std::cout << b2;
	try {
		b2.lowGrade();
		std::cout << b2;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b3("Leon", 2);
	try{
		b3.upGrade();
		std::cout << b3;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
}