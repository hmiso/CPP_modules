/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:34:54 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 17:52:38 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(Cure const &ptr) : AMateria("cure")
{
	*this = ptr;
}

Cure &Cure::operator=(Cure const &ptr)
{
	this->set_hp(ptr.getXP());
	this->set_type(ptr.getType());
	return *this;
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() <<  "’s wounds *" << std::endl;
}
AMateria* Cure::clone() const
{
	return new Cure();
}

