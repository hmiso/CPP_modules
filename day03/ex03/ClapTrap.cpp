/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 15:16:46 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/04 18:23:50 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(){
	std::cout << "ClapTrap \u001b[35m<Parent" << ">\u001b[0m "
	<< " constructor caused by" << std::endl;
	this->Name = "";
	Hit_points = 0;
	Max_hit_points = 0;
	Energy_points = 0;
	Max_energy_points = 0;
	Level = 0;
	Melee_attack_damage = 0;
	Ranged_attack_damage = 0;
	Armor_damage_reduction = 0;
	type = "Parent";
}
ClapTrap::ClapTrap(const ClapTrap &ptr){
	*this = ptr;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &ptr)
{
    this->Name = ptr.Name;
    this->Hit_points = ptr.Hit_points;
    this->Max_hit_points = ptr.Max_hit_points;
    this->Energy_points = ptr.Energy_points;
    this->Max_energy_points = ptr.Max_energy_points;
    this->Level = ptr.Level;
    this->Melee_attack_damage = ptr.Melee_attack_damage;
    this->Ranged_attack_damage = ptr.Ranged_attack_damage;
    this->Armor_damage_reduction = ptr.Armor_damage_reduction;
    this->type = ptr.type;
    return *this;
}
std::string ClapTrap::get_type()
{
	return (type);
}
std::string ClapTrap::get_name()
{
	return(Name);
}
int ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << type << Name << ">\u001b[0m atack: \u001b[31m<" << target << ">\u001b[0m" << " at range, causing <"
	<< Ranged_attack_damage << "> points of damage!" << std::endl;
	return(Ranged_attack_damage);
}
int ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << type << Name << ">\u001b[0m atack: \u001b[31m<" << target << ">\u001b[0m" << " at melee, causing <"
	<< Melee_attack_damage << "> points of damage!" << std::endl;
	return (Melee_attack_damage);
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0)
	{
		Hit_points = Hit_points - (amount - Armor_damage_reduction);
		if (Hit_points < 0)
		{
			Hit_points = 0;
			std::cout << type << Name << ">\u001b[0m What is dead cannot die!" <<
			". Hit points: " << Hit_points << std::endl;
		}
		else
		{
			std::cout << type << Name << ">\u001b[0m Take damage " << amount - Armor_damage_reduction <<
			". Hit points: " << Hit_points << std::endl;
		}
	}
}
void ClapTrap::recovery_hp(int const hp)
{
	if(Hit_points + hp >= Max_hit_points)
	{
		std::cout << type << Name << ">\u001b[0m" << " Restored health " << Max_hit_points - Hit_points << ". Hit points is fuul!" << std::endl;
		Hit_points = Max_hit_points;
	}
	else
	{
		Hit_points += hp;
		std::cout << type << Name << ">\u001b[0m" << " Restored health " << hp << ". Hit points is "<< Hit_points << std::endl;
	}
}
void ClapTrap::recovery_ep(int const ep)
{
	if(Energy_points + ep >= Max_energy_points)
	{
		std::cout << type << Name << ">\u001b[0m" << " Restored energy: \u001b[32m" << Max_energy_points - Energy_points << "\u001b[0m. Energy points is fuul!" << std::endl;
		Energy_points = Max_energy_points;
	}
	else
	{
		Energy_points += ep;
		std::cout  << type << Name << ">\u001b[0m" << " Restored energu: \u001b[32m" << ep << "\u001b[0m Energy points is "<< Energy_points << std::endl;
	}
}	
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap \u001b[35m<Parent" << ">\u001b[0m "
	<< " destructor caused by" << std::endl;
}
