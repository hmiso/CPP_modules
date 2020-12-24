/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:06:26 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:50:31 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {}

ZombieHorde::ZombieHorde(int n)
{
	int i = 0;
	_n = n;
	std::string mas[5] = {"Zombi_Bob", "Zombi_Jack", "Zombi_Ervin", "Zombi_Lass", "Zombi_Chack"};
	_ptr = new Zombie[n];
	while(i < n)
	{
		_ptr[i] = Zombie(mas[std::rand() % 5], "School21");
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] _ptr;
}

void ZombieHorde::announce()
{
	int i = 0;
	while(i < _n)
	{
		_ptr[i].announce();
		i++;
	}
}