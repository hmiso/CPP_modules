/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 12:02:46 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 12:04:17 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &ptr);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &ptr);
	void execute(Bureaucrat const &executor) const;
	~ShrubberyCreationForm(){}
};


#endif