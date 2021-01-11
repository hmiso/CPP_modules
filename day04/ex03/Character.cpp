/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:25:11 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 17:59:15 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	int i = 0;
	while(i < 4)
	{
		slots[i] = NULL;
		i++;
	}
	this->count_clots = 0;
}
Character::Character(Character const &ptr)
{
	*this = ptr;
}

Character &Character::operator=(Character const &ptr)
{
	this->name = ptr.name;
	this->count_clots = ptr.count_clots;
	int i = 0;
	while(i < 4)
	{
		this->slots[i] = ptr.slots[i];
		i++;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}
void Character::equip(AMateria *m)
{
	if( count_clots < 4)
	{
		slots[count_clots] = m;
		count_clots++;
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= count_clots)
		slots[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < count_clots && slots[idx])
		slots[idx]->use(target);
}
Character::~Character()
{
	int i = 0;
	while(i < 4)
	{
		if (slots[i] != NULL)
			delete slots[i];
		i++;	
	}
}