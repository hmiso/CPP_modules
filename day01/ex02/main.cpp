/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 11:54:16 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:37:47 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	Zombie *ptr;
	ZombieEvent event;

	std::srand(3);
	event.setZombieType("Strong");
	ptr = event.randomChump();
	delete ptr;
	ptr = event.randomChump();
	delete ptr;
	ptr = event.randomChump();
	delete ptr;
	event.setZombieType("Fast");
	ptr = event.newZombie("Zombi_Dik");
	ptr->announce();
	delete ptr;
}