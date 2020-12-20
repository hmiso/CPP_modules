/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 11:35:06 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 19:45:55 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::ZombieEvent(std::string type) 
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *ptr;

	ptr = new Zombie(name, type);
	return (ptr);
}

void ZombieEvent::setZombieType(Zombie &ptr, std::string type)
{
	ptr.set_type(type);
}

Zombie*	ZombieEvent::randomChump()
{

	const int i = 5;
	std::string mas[i] = {"Zomby1", "Zomby2", "Zomby3", "Zomby4", "Zomby5"};
	Zombie *ptr = event.newZombie(mas[std::rand() % 5]);
	ptr->announce();
	return (ptr);
}