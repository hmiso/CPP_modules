/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:06:26 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 18:18:07 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int i)
{
	int const count = i;
	int j = 0;
	std::string mas[5] = {"Zomby1", "Zomby2", "Zomby3", "Zomby4", "Zomby5"};
	this->horde = new Zombie[count];
	while(j < i)
	{
		horde[j] = Zombie(mas[0]);
		horde[j].set_type("bly")
	}
}

// Zombie* ZombieEvent::newZombie(std::string name)
// {
// 	Zombie *ptr;

// 	ptr = new Zombie(name);
// 	return (ptr);
// }

// void ZombieEvent::setZombieType(Zombie &ptr, std::string type)
// {
// 	ptr.set_type(type);
// }
