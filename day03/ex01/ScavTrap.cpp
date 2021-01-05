/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 10:42:04 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/04 15:02:09 by hmiso            ###   ########.fr       */
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
    std::cout << "Serena \u001b[35m<" << name << ">\u001b[0m "
    << "Aaaah... <Sounds of singing>!" << std::endl;
    this->Name = name;
    type = "Serena\u001b[32m <";
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

std::string ScavTrap::get_name()
{
    return(Name);
}
ScavTrap::~ScavTrap()
{
    std::cout << type << Name << ">\u001b[0m \u001b[34mWho is googl and why does he have the answers to all my riddles?\u001b[0m" << std::endl;
}
int ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << type << Name << ">\u001b[0m atack: \u001b[31m<" << target << ">\u001b[0m" << " at range, causing <"
    << Ranged_attack_damage << "> points of damage!" << std::endl;
    return(Ranged_attack_damage);
}
int ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << type << Name << ">\u001b[0m atack: \u001b[31m<" << target << ">\u001b[0m" << " at melee, causing <"
    << Melee_attack_damage << "> points of damage!" << std::endl;
    return (Melee_attack_damage);
}
void ScavTrap::takeDamage(unsigned int amount)
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
        std::cout << type << Name << ">\u001b[0m Asks a question: " << attack_options[(rand() % 5)] 
        << std::endl;
    }
    else
    {
        std::cout << type << Name << ">\u001b[0m" << " Not enough energy! current energy: " << Energy_points << std::endl;
    }
}
void ScavTrap::recovery_hp(int const hp)
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
void ScavTrap::recovery_ep(int const ep)
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