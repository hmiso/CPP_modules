/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:29:47 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/13 09:33:13 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("test", 0);
		std::cout << "sucsus!" << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}