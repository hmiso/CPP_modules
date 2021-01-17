/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:29:47 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:38:35 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try{
		Form t1("test cath low", 161, 60);
		std::cout << t1;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form t1("test cath hich", -1, 60);
		std::cout << t1;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}	
	Bureaucrat b1("Putin", 91);
	Form f2("Constitution", 90, 69);
	b1.signForm(f2);
	std::cout << f2;
	b1.upGrade();
	b1.signForm(f2);
	std::cout << f2;
}