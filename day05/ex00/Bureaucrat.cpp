/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:07:21 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/13 09:36:34 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return("Error: Very high rank!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return("Error: Very low rank!");
}

Bureaucrat::Bureaucrat(std::string name, int grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->name = name;
	this->grade = grade;	
}

std::string Bureaucrat::getName(){
	return name;
}

int Bureaucrat::getGrade(){
	return grade;
}

void Bureaucrat::upGrade(){
	if (getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade -= 1;
}

void Bureaucrat::lowGrade(){
	if (getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade += 1;
}
