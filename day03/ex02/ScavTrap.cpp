/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 10:42:04 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 13:00:49 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
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

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Serena <" << name << "> "
    << "Aaaah... <Sounds of singing>!" << std::endl;
    this->Name = name;
    type = "Serena <";
    Hit_points = 100;
    Max_hit_points = 100;
    Energy_points = 50;
    Max_energy_points = 50;
    Level = 1;
    Melee_attack_damage = 20;
    Ranged_attack_damage = 15;
    Armor_damage_reduction = 3;
};

ScavTrap::ScavTrap(const ScavTrap &ptr){
    *this = ptr;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &ptr)
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

ScavTrap::~ScavTrap()
{
    std::cout << type << Name << "> Who is googl and why does he have the answers to all my riddles?" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
    std::string attack_options[5];
    attack_options[0] = "Where are cities without houses, rivers without water, and forests without trees? ";
    attack_options[1] = "What's bigger if you put it upside down? ";
    attack_options[2] = "How to pick a branch so as not to scare the bird? ";
    attack_options[3] = "How many months in a year have 28 days? ";
    attack_options[4] = "Which clock shows the correct time only twice a day? ";
    if (Energy_points - 25 >= 0)
    {
        srand(time(NULL));

        sleep(1);
        Energy_points = Energy_points - 25;
        std::cout << type << Name << "> Asks a question: " << attack_options[(rand() % 5)] 
        << std::endl;
    }
    else
    {
        std::cout << type << Name << ">" << " Not enough energy! current energy: " << Energy_points << std::endl;
    }
}