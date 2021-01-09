/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:36:51 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 16:19:13 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

std::string Victim::get_name() const 
{ 
	return name;
}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called " + name + " just appeared!" << std::endl;
	this->name = name;
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " + name + " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim& ptr)
{
	*this = ptr;
}

Victim &Victim::operator = (const Victim &ptr)
{
	this->name = ptr.name;
	return *this;
}

std::ostream &operator<<(std::ostream &stream, const Victim &ptr)
{
	stream << "I'm " + ptr.get_name() + " and I like otters!" << std::endl;
	return(stream);
}
