/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:10:25 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 19:50:06 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
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

RadScorpion &RadScorpion::operator = (RadScorpion const &ptr){
	this->type = ptr.type;
	this->hp = ptr.hp;
	return *this;
}

RadScorpion::RadScorpion(RadScorpion const &ptr) : Enemy (ptr)
{
	std::cout << "* click click click *" << std::endl;
}
