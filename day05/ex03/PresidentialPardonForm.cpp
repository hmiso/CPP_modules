/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:43:40 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 11:20:42 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5){
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ptr) : Form(ptr){
	this->target = ptr.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &ptr){
	this->target = ptr.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}