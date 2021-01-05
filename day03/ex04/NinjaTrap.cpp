/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:56:30 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 11:25:05 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"


	NinjaTrap::NinjaTrap(std::string name)
	{
		std::cout << "Ninja \u001b[35m <" << name << ">\u001b[0m "
		<< "Phhh... A witty phrase from!" << std::endl;
		this->Name = name;
		Hit_points = 60;
		Max_hit_points = 60;
		Energy_points = 120;
		Max_energy_points = 120;
		Level = 1;
		Melee_attack_damage = 60;
		Ranged_attack_damage = 5;
		Armor_damage_reduction = 0;
		type = "Ninja \u001b[32m <";
	}
	NinjaTrap::NinjaTrap()
	{
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
	NinjaTrap::NinjaTrap(const NinjaTrap &ptr){
		*this = ptr;
	}
	NinjaTrap &NinjaTrap::operator= (NinjaTrap const &ptr)
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
	void NinjaTrap::set_hp() {this->Hit_points = 60;}
	void NinjaTrap::set_max_hp() {this->Hit_points = 60;}
	void NinjaTrap::set_ep() {this->Energy_points = 120;}
	void NinjaTrap::set_max_ep() {this->Max_energy_points = 120;}
	void NinjaTrap::set_lvl() {this->Level = 1;}
	void NinjaTrap::set_melee_atack() {this->Melee_attack_damage = 60;}
	void NinjaTrap::set_ranged_atack() {this->Ranged_attack_damage = 5;}
	void NinjaTrap::set_amor() {this->Armor_damage_reduction = 0;}
	void NinjaTrap::set_type() {this->type = "Ninja \u001b[32m <";}	
	
	void NinjaTrap::ninjaShoebox(FragTrap & name){
		std::cout << type << "There's supposed to be a fun action here but I've been put on " 
		<< "If this is important to you then passed a link to the class \u001b[32m" << name.get_type() << "\u001b[0m" << std::endl;
	}
	void NinjaTrap::ninjaShoebox(ScavTrap & name){
		std::cout << type << "There's supposed to be a fun action here but I've been put on " 
		<< "If this is important to you then passed a link to the class \u001b[32m" << name.get_type() << "\u001b[0m" << std::endl;
	}
	void NinjaTrap::ninjaShoebox(NinjaTrap & name){
		std::cout << type << "There's supposed to be a fun action here but I've been put on" 
		<< "If this is important to you then passed a link to the class \u001b[32m" << name.get_type() << "\u001b[0m" << std::endl;
	}
	void NinjaTrap::ninjaShoebox(ClapTrap & name){
		std::cout << type << "There's supposed to be a fun action here but I've been put on" << std::endl;
		std::cout << "If this is important to you then passed a link to the class \u001b[32m" << name.get_type() << "\u001b[0m" << std::endl;
	}	
	NinjaTrap::~NinjaTrap()
	{
    	std::cout << "Ninja \u001b[32m <" << Name << ">\u001b[34m I am officially informing you that the NinjaTrap destructor has been called\u001b[0m" << std::endl;
	}
