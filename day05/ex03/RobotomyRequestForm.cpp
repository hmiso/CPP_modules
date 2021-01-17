/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 11:37:49 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 11:50:37 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45){
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ptr) : Form(ptr){
	this->target = ptr.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &ptr){
	this->target = ptr.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	Form::execute(executor);
	std::cout << "* DRRRRR DRRRR *" << std::endl;
    srand(time(NULL));
    sleep(1);
	if (rand() % 2 == 1){
		std::cout << target << " has been robotomized successfully!" << std::endl;
	}
	else{
		std::cout << target << " robotomized it’s a failure!" << std::endl;
	}
}