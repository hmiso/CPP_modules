/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:20:01 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 11:13:02 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREZIDENT_HPP
#define PREZIDENT_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &ptr);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &ptr);
	void execute(Bureaucrat const &executor) const;
	~PresidentialPardonForm(){}
};


#endif