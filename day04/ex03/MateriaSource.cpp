/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:14:09 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 18:04:00 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count_slots = 0;
	int i = 0;
	while(i < 4)
	{
		slots[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const &ptr)
{
	int i = 0;
	while(i < ptr.count_slots)
	{
		learnMateria(ptr.slots[i]->clone());
		i++;
	}
	this->count_slots = ptr.count_slots; 
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ptr)
{
	int i = 0;
	if (this->count_slots != 0)
	{
		while(i < this->count_slots)
		{
			delete this->slots[i]; 
			i++;
		}
	}
	i = 0;
	while(i < ptr.count_slots)
	{
		learnMateria(ptr.slots[i]->clone());
		i++;
	}
	return(*this);
}

void MateriaSource::learnMateria(AMateria *ptr){
	if (ptr && count_slots < 4)
	{
		slots[count_slots] = ptr;
		count_slots++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type){
	int i = 0;
	if (count_slots != 0)
	{
		while(i < count_slots)
		{
			if(slots[i]->getType() == type)
			{
				return slots[i]->clone();
			}
		i++;
		}
	}
	return NULL;
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while(i < count_slots)
	{
		delete slots[i];
		i++;
	}
}