/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:16:18 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:43:41 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern{
private:
	std::string name_form[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form* (*ptr[3])(const std::string&) = {makePardon, makeRobotomy, makeShrubbery};
	Form static *makeRobotomy(const std::string &target);
	Form static *makePardon(const std::string &target);
	Form static *makeShrubbery(const std::string &target);
public:
	Intern(){}
	Intern(Intern const &ptr);
	Form *makeForm(std::string name, std::string target);
	Intern &operator = (Intern const &ptr);
	class UnknowFormException : public std::exception{
		public:
		const char* what() const throw();
	};
	~Intern(){}	
};

#endif