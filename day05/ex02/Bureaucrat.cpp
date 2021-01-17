/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 09:07:21 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:40:37 by hmiso            ###   ########.fr       */
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

std::string Bureaucrat::getName() const{
	return name;
}

int Bureaucrat::getGrade() const{
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

void Bureaucrat::signForm(Form &ptr){

	if (ptr.get_is_signed()){
		std::cout << ptr.get_name() << " has already been signed!" << std::endl;
	}
	else{
		if (ptr.get_grade_singature() >= getGrade()){
			std::cout << getName() << " signs " << ptr.get_name() << std::endl;
			ptr.beSigned(*this);
		}
		else{
			std::cout << getName() << " cannot sign " << ptr.get_name() << " because his grade is too low!" << std::endl;			
		}
	}	
}


void Bureaucrat::executeForm(Form const & form){
	if (form.get_is_signed()){
		if (form.get_grede_exucte() >= this->grade){
			std::cout << name << "is executing " << form.get_name() << std::endl;
			form.execute(*this);
		}
		else{
			std::cout << name << " can't execute " << form.get_name() << " because, his grade is too small!" << std::endl;
		}
	}
	else{
		std::cout << form.get_name() << " is not singned!" << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &ptr){
	*this = ptr;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &ptr){
	this->name = ptr.name;
	this->grade = ptr.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream,  Bureaucrat const &ptr){
	stream << ptr.getName() << ", bureaucrat grade " << ptr.getGrade() << std::endl;
	return stream;
}