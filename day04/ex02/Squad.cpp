/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:38:32 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 22:49:06 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad()
{
	count = 0;
	squad = NULL;
}

Squad::Squad(Squad const &ptr)
{
	*this = ptr;
}

Squad &Squad::operator=(Squad const &ptr)
{
	this->count = ptr.count;
	this->squad = ptr.squad;
	return *this;
}

int Squad::getCount() const{
	return count;
}
ISpaceMarine *Squad::getUnit(int i) const {
	if (i > count)
		return NULL;
	else
		return squad[i];
}
int Squad::push(ISpaceMarine *ptr){
	if (!ptr)
		return count;
	int i = 0;
	while(i < count)
	{
		if(squad[i] == ptr)
			return count;
		i++;
	}
	ISpaceMarine **mas_new_sqwad = new ISpaceMarine* [i + 1];
	i = 0;
	while(i < count)
	{
		mas_new_sqwad[i] = squad[i];
		i++;
	}
	mas_new_sqwad[i] = ptr;
	delete[] squad;
	squad = mas_new_sqwad;
	count =  i + 1;
	return i;
}
Squad::~Squad(){
	int i = 0;
	while(i < count)
	{
		delete squad[i];
		i++;
	}
}
