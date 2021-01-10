/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:58:02 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 19:50:33 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage > 0)
	{
		if(getHP() > 0)
		{
			setHP(getHP() - (damage - 3));
			if (getHP() < 0)
				setHP(0);			
		}
	}
}

SuperMutant &SuperMutant::operator = (SuperMutant const &ptr){
	this->type = ptr.type;
	this->hp = ptr.hp;
	return *this;
}

SuperMutant::SuperMutant(SuperMutant const &ptr) : Enemy (ptr)
{
	std::cout << "Aaargh..." << std::endl;
}
