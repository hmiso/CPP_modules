/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:29:47 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:28:49 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	Bureaucrat b2("Ridik", 149);
	PresidentialPardonForm f1("Jone");
	Bureaucrat b1("Putin", 1);
	b1.signForm(f1);
	b1.executeForm(f1);
	RobotomyRequestForm f2("Bill");
	b1.signForm(f2);
	b1.executeForm(f2);
	ShrubberyCreationForm f3("tree");
	b1.signForm(f3);
	b1.executeForm(f3);
}