/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 11:36:16 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 11:49:51 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "Form.hpp"
#include <unistd.h>

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &ptr);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &ptr);
	void execute(Bureaucrat const &executor) const;
	~RobotomyRequestForm(){}
};


#endif