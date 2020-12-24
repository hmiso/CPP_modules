/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 11:35:06 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:35:17 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {};

void ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) 
{
	Zombie *ptr;
	ptr = new Zombie(name, _type);
	return(ptr);
}

Zombie* ZombieEvent::randomChump()
{
	Zombie *ptr;
	std::string mas[5] = {"Zombi_Bob", "Zombi_Jack", "Zombi_Ervin", "Zombi_Lass", "Zombi_Chack",};
	ptr = newZombie(mas[std::rand() % 5]);
	ptr->announce();
	return ptr;
 }