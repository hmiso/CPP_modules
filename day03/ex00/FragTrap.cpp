/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 19:04:42 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 12:46:07 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
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

FragTrap::FragTrap(std::string name)
{
    std::cout << "FR4G-TP <" << name << "> "
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
    type = "FR4G-TP  <";
};
std::string FragTrap::get_name()
{
    return(Name);
}

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
    std::cout << type << Name << "> Windows blue screen of death..." << std::endl;
}
int FragTrap::rangedAttack(std::string const & target)
{
    std::cout << type << Name << "> atack: <" << target << ">" << " at range, causing <"
    << Ranged_attack_damage << "> points of damage!" << std::endl;
    return(Ranged_attack_damage);
}
int FragTrap::meleeAttack(std::string const & target)
{
    std::cout << type << Name << "> atack: <" << target << ">" << " at melee, causing <"
    << Melee_attack_damage << "> points of damage!" << std::endl;
    return (Melee_attack_damage);
}
void FragTrap::takeDamage(unsigned int amount)
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
        std::cout << type << Name << "> atack: " << target << " " << attack_options[(rand() % 5)] 
        << Melee_attack_damage << " points of damage!" << std::endl;
        return(Melee_attack_damage);
    }
    else
    {
        std::cout << type << Name << ">" << " Not enough energy to attack! current energy: " << Energy_points << std::endl;
        return(0);
    }
}
void FragTrap::recovery_hp(int const hp)
{
    if(Hit_points + hp >= Max_hit_points)
    {
        std::cout << type << Name << ">" << " Restored health " << Max_hit_points - Hit_points << ". Hit points is fuul!" << std::endl;
        Hit_points = Max_hit_points;
    }
    else
    {
        Hit_points += hp;
        std::cout << type << Name << ">" << " Restored health " << hp << ". Hit points is "<< Hit_points << std::endl;
    }
}
void FragTrap::recovery_ep(int const ep)
{
    if(Energy_points + ep >= Max_energy_points)
    {
        std::cout << type << Name << ">" << " Restored energy: " << Max_energy_points - Energy_points << ". Energy points is fuul!" << std::endl;
        Energy_points = Max_energy_points;
    }
    else
    {
        Energy_points += ep;
        std::cout  << type << Name << ">" << " Restored energu: " << ep << " Energy points is "<< Energy_points << std::endl;
    }
}
