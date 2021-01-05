/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 19:04:42 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 11:25:44 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->Name ="";
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

void FragTrap::set_hp() {this->Hit_points = 100;}
void FragTrap::set_max_hp() {this->Max_hit_points = 100;}
void FragTrap::set_ep() {this->Energy_points = 100;}
void FragTrap::set_max_ep() {this->Max_energy_points= 100;}
void FragTrap::set_lvl() {this->Level = 1;}
void FragTrap::set_melee_atack() {this->Melee_attack_damage = 30;}
void FragTrap::set_ranged_atack() {this->Ranged_attack_damage = 20;}
void FragTrap::set_amor() {this->Armor_damage_reduction = 5;}
void FragTrap::set_type() {this->type = "FR4G-TP \u001b[32m <";}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FR4G-TP \u001b[35m <" << name << ">\u001b[0m "
    << "Phhh... I want to see your blood, Bone leather bag!" << std::endl;
    this->Name = name;
    Hit_points = 100;
    Max_hit_points = 100;
    Energy_points = 100;
    Max_energy_points = 100;
    Level = 1;
    Melee_attack_damage = 30;
    Ranged_attack_damage = 20;
    Armor_damage_reduction = 5;
    type = "FR4G-TP \u001b[32m <";
};

FragTrap::FragTrap(const FragTrap &ptr){
    *this = ptr;
}

FragTrap &FragTrap::operator= (FragTrap const &ptr)
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

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP \u001b[32m <" << Name << ">\u001b[0m \u001b[34mWindows blue screen of death...\u001b[0m" << std::endl;
}

int FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string attack_options[5];
    attack_options[0] = "with a raw spiked club- ";
    attack_options[1] = "with a large raw spiked club- ";
    attack_options[2] = "inflicts psychological trauma on you with an intro subject- ";
    attack_options[3] = "hacks the account and buys the tiz- ";
    attack_options[4] = "make @chanel from your slack to adm- ";
    if (Energy_points - 25 >= 0)
    {
        srand(time(NULL));
        
        sleep(1);
        Energy_points = Energy_points - 25;
        std::cout << type << Name << ">\u001b[0m atack: \u001b[31m" << target << "\u001b[0m " << attack_options[(rand() % 5)] 
        << Melee_attack_damage << " points of damage!" << std::endl;
        return(Melee_attack_damage);
    }
    else
    {
        std::cout << type << Name << ">\u001b[0m" << " Not enough energy to attack! current energy: " << Energy_points << std::endl;
        return(0);
    }
}
