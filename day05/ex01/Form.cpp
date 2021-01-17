/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 08:04:27 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 17:39:25 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int rank_signature, int rank_execute)
{
	if (rank_signature > 150 || rank_execute > 150){
		throw Form::GradeTooLowException();
	}
	else if(rank_signature < 1 || rank_execute < 1) {
		throw Form::GradeTooHighException();
	}
	this->name = name;
	this->the_desired_rank_for_the_signature = rank_signature;
	this->the_desired_rank_for_the_execute = rank_execute;
	this->is_signed = false;
}

std::string Form::get_name() const{
	return name;
}

int Form::get_grade_singature() const{
	return the_desired_rank_for_the_signature;
}

int Form::get_grede_exucte() const{
	return the_desired_rank_for_the_execute;
}

bool Form::get_is_signed() const{
	return is_signed;
}

void Form::beSigned(Bureaucrat &ptr){
	if (ptr.getGrade() <= get_grade_singature()){
		this->is_signed = true;
	}
}

const char* Form::GradeTooHighException::what() const throw(){
	return("Form error: Very high grade!");
}

const char* Form::GradeTooLowException::what() const throw(){
	return("Form error: Very low grade!");
}

Form::Form(Form const &ptr){
	*this = ptr;
}

Form &Form::operator = (Form const &ptr){
	this->is_signed = ptr.is_signed;
	this->name = ptr.name;
	this->the_desired_rank_for_the_execute = ptr.the_desired_rank_for_the_execute;
	this->the_desired_rank_for_the_signature = ptr.the_desired_rank_for_the_signature;
	return *this;
}

std::ostream &operator<<(std::ostream &stream, Form const &ptr){
	if (ptr.get_is_signed()){
		stream << ptr.get_name() << " is signed " << "grade to execute : " << ptr.get_grede_exucte()
		<< " grade to signature :" << ptr.get_grade_singature() << std::endl;
	}
	else{
		stream << ptr.get_name() << " is NOT signed " << "grade to execute : " << ptr.get_grede_exucte()
		<< " grade to signature :" << ptr.get_grade_singature() << std::endl;		
	}
	return stream;
}