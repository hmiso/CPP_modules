/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:34:16 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 19:59:32 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name)
{
	this->name = name;
	AP = 40;
	weapon = nullptr;
}
void Character::recoverAP()
{
	if (AP < 40)
	{
		if (AP + 10 < 40)
			AP += 10;
		else
			AP = 40;	
	}
	std::cout << "Recover AP. " << name << "has AP: " << AP << std::endl;
}
std::string Character::get_name() const
{
	return name;
}
int Character::get_ap() const{
	return AP;
}
std::string Character::get_name_weapon() const{
	if(weapon)
		return weapon->getName();
	else
		return NULL;	
}
AWeapon *Character::get_weapon() const
{
	return weapon;
}
void Character::equip(AWeapon *ptr)
{
	weapon = ptr;
}

Character::Character(Character const &ptr)
{
	*this = ptr;
}

void Character::attack(Enemy *ptr)
{
	if (weapon && ((AP - weapon->getAPCost() > 0)))
	{
		AP -= weapon->getAPCost();
		std::cout << name << " attacks " << ptr->getType() << " with a " << weapon->getName() << std::endl;
		weapon->attack();
		ptr->takeDamage(weapon->getDamage());
		if(ptr->getHP() <= 0)
		{
			ptr->~Enemy();
		}
	}
	if (AP - weapon->getAPCost() < 0)
	{
		std::cout << "Not enough ap to attack!" << name << "has AP: " << AP << std::endl;
	}
}

Character &Character::operator = (Character const &ptr)
{
	this->name = ptr.name;
	this->AP = ptr.AP;
	this->weapon = ptr.weapon;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Character &ptr)
{
	if(ptr.get_weapon())
		std::cout << ptr.get_name() << " has " << ptr.get_ap() << " AP and wields a " << ptr.get_name_weapon() << std::endl;
	else
		std::cout << ptr.get_name() << " has " << ptr.get_ap() << " AP and is unarmed" << std::endl;
	return(stream);
}
