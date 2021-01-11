/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 15:16:46 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 13:30:08 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap <Parent" << "> "
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

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap <" << name << "> "
	<< " constructor caused by" << std::endl;
	this->Name = name;
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

std::string ClapTrap::get_name()
{
	return(Name);
}

std::string ClapTrap::get_type()
{
	return(type);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0)
	{
		Hit_points = Hit_points - (amount - Armor_damage_reduction);
		if (Hit_points < 0)
		{
			Hit_points = 0;
			std::cout << type << Name << "> What is dead cannot die!" <<
			". Hit points: " << Hit_points << std::endl;
		}
		else
		{
			std::cout << type << Name << "> Take damage " << amount - Armor_damage_reduction <<
			". Hit points: " << Hit_points << std::endl;
		}
	}
}
void ClapTrap::recovery_hp(int const hp)
{
	if(Hit_points + hp >= Max_hit_points)
	{
		std::cout << type << Name << ">" << " Restored health " << this->Max_hit_points -  this->Hit_points << ". Hit points is fuul!" << std::endl;
			this->Hit_points =  this->Max_hit_points;
	}
	else
	{
			this->Hit_points += hp;
		std::cout << type << Name << ">" << " Restored health " << hp << ". Hit points is "<<  this->Hit_points << std::endl;
	}
}
void ClapTrap::recovery_ep(int const ep)
{
	if(Energy_points + ep >= Max_energy_points)
	{
		std::cout <<  this->type <<  this->Name << ">" << " Restored energy: " <<  this->Max_energy_points -  this->Energy_points << ". Energy points is fuul!" << std::endl;
			this->Energy_points = this->Max_energy_points;
	}
	else
	{
			this->Energy_points +=  ep;
		std::cout  <<  this->type <<  this->Name << ">" << " Restored energu: " << ep << " Energy points is "<<  this->Energy_points << std::endl;
	}
}
int ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << type << Name << "> atack: <" << target << ">" << " at range, causing <"
	<< this->Ranged_attack_damage << "> points of damage!" << std::endl;
	return(Ranged_attack_damage);
}
int ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->type << Name << "> atack: <" << target << ">" << " at melee, causing <"
	<< Melee_attack_damage << "> points of damage!" << std::endl;
	return (Melee_attack_damage);
}	
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap <"<< Name << "> "
	<< " destructor caused by" << std::endl;
}
