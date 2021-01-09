/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:19:40 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 16:37:24 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	name = "";
	title = "";
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

std::string Sorcerer::introduce_yourself(void) const
{
	return ("I am " + name + ", " + title + ", and I like ponies!");
}

void Sorcerer::polymorph(Victim const &ptr)
{
	ptr.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &ptr)
{
	*this = ptr;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &ptr)
{
	this->name = ptr.name;
	this->title = ptr.title;
	return *this;
}

std::ostream &operator<<(std::ostream &stream, const Sorcerer &ptr)
{
	stream << ptr.introduce_yourself() << std::endl;
	return(stream);
}
