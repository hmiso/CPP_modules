/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:29:47 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:50:22 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat b1("Putin", 1);
	Intern intern;
	Form *ptr = intern.makeForm("robotomy request", "bender");
	b1.signForm(*ptr);
	b1.executeForm(*ptr);
	Form *ptr3 = intern.makeForm("presidential pardon", "bender");
	b1.signForm(*ptr3);
	b1.executeForm(*ptr3);
	Form *ptr4 = intern.makeForm("shrubbery creation", "bender");
	b1.signForm(*ptr4);
	b1.executeForm(*ptr4);		
	try {
		Form *ptr2 = intern.makeForm("dont now what is a form", "dfg");
		ptr2 = NULL;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	delete ptr;
	delete ptr3;
	delete ptr4;
}