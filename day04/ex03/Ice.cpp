/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:02:11 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 18:03:11 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(Ice const &ptr) : AMateria("ice")
{
	*this = ptr;
}

Ice &Ice::operator=(Ice const &ptr)
{
	this->set_hp(ptr.getXP());
	this->set_type(ptr.getType());
	return *this;
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice();
}