/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:27:04 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 13:29:42 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap(){
	this->Name = "";
	Hit_points = 0;
	Max_hit_points = 0;
	Energy_points = 0;
	Max_energy_points = 0;
	Level = 0;
	Melee_attack_damage = 0;
	Ranged_attack_damage = 0;
	Armor_damage_reduction = 0;
	type = "";
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {
	std::cout << "SuperTrap " << name << " has been creete" << std::endl;
	FragTrap::set_hp();
	this->Hit_points = FragTrap::Hit_points;
	FragTrap::set_max_hp();
	this->Max_hit_points = FragTrap::Max_hit_points;
	NinjaTrap::set_ep();
	this->Energy_points = NinjaTrap::Energy_points;
	NinjaTrap::set_max_ep();
	this->Max_energy_points = NinjaTrap::Max_energy_points;
	this->Level = 1;
	this->Name = name;
	NinjaTrap::set_melee_atack();
	this->Melee_attack_damage = NinjaTrap::Melee_attack_damage;
	FragTrap::set_ranged_atack();
	this->Ranged_attack_damage = FragTrap::Ranged_attack_damage;
	FragTrap::set_amor();
	this->Armor_damage_reduction = FragTrap::Armor_damage_reduction;
	this->type = "Super_Trap  <";
}
SuperTrap::~SuperTrap(){
	std::cout << "Super_Trap  <" << Name << "> has been destoyed" << std::endl;
}
void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}
int SuperTrap::meleeAttack(std::string const & target)
{
	return NinjaTrap::meleeAttack(target);
}

SuperTrap::SuperTrap(const SuperTrap &ptr){
	*this = ptr;
}
SuperTrap &SuperTrap::operator= (SuperTrap const &ptr)
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