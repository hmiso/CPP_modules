/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 14:14:41 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 16:09:37 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	while (i < 3)
	{
		if (name_form[i] == name){
			return ptr[i](target);
		}
		i++;
	}
	throw Intern::UnknowFormException(); 
	return NULL;
};

const char* Intern::UnknowFormException::what() const throw(){
	return("Make form error: unkown form!");
}

Intern::Intern(Intern const &ptr){
	(void)ptr;
}
Form *Intern::makeRobotomy(const std::string &target){
	return new RobotomyRequestForm(target);
}
Form *Intern::makePardon(const std::string &target){
	return new PresidentialPardonForm(target);
}
Form *Intern::makeShrubbery(const std::string &target){
	return new ShrubberyCreationForm(target);
}

Intern &Intern::operator = (Intern const &ptr){
	(void)ptr;
	return *this;
}
