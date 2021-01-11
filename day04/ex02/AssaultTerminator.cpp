/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:18:39 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 22:22:12 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"


AssaultTerminator::AssaultTerminator(){
	type = "AssaultTerminator";
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &ptr)
{
	*this = ptr;
}

AssaultTerminator &AssaultTerminator:: operator=(AssaultTerminator const &ptr)
{
	this->type = ptr.type;
	return *this;
}

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const {
	AssaultTerminator *ptr = new AssaultTerminator(*this);
	return ptr;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I’ll be back..." << std::endl;
}
