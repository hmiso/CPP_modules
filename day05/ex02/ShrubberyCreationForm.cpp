/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 12:04:29 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/17 12:26:31 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137){
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ptr) : Form(ptr){
	this->target = ptr.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ptr){
	this->target = ptr.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	Form::execute(executor);
	std::string tree[1] = {
"¨¨¨¨¨¨¨¨¨★\n"
"¨¨¨¨¨¨¨¨¨**\n"
"¨¨¨¨¨¨¨¨¨*o*\n"
"¨¨¨¨¨¨¨¨*♥*o*\n"
"¨¨¨¨¨¨¨***o***\n"
"¨¨¨¨¨¨**o**♥*o*\n"
"¨¨¨¨¨**♥**o**o**\n"
"¨¨¨¨**o**♥***♥*o*\n"
"¨¨¨*****♥*o**o****\n"
"¨¨**♥**o*****o**♥**\n"
"¨******o*****♥**o***\n"
"****o***♥**o***o***♥ *\n"
"¨¨¨¨¨____!_!____"
"¨¨¨¨¨_________/¨¨"
	};
	
	std::ofstream tree_file(target + "_shrubbery");
	tree_file << tree[0] << std::endl;
	tree_file.close(); 
}