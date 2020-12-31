/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 19:04:42 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/31 19:08:12 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "FR4G-TP \u001b[35m<" << name << ">\u001b[0m "
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
};
std::string FragTrap::get_name()
{
    return(Name);
}
FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m \u001b[34mWindows blue screen of death...\u001b[0m" << std::endl;
}
int FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m atack: \u001b[31m<" << target << ">\u001b[0m" << " at range, causing <"
    << Ranged_attack_damage << "> points of damage!" << std::endl;
    return(Ranged_attack_damage);
}
int FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP\u001b[32m <" << Name << ">\u001b[0m atack: \u001b[31m<" << target << ">\u001b[0m" << " at melee, causing <"
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
            std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m What is dead cannot die!" <<
            ". Hit points: " << Hit_points << std::endl;
        }
        else
        {
            std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m Take damage " << amount - Armor_damage_reduction <<
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
        std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m atack: \u001b[31m" << target << "\u001b[0m " << attack_options[(rand() % 5)] 
        << Melee_attack_damage << " points of damage!" << std::endl;
        return(Melee_attack_damage);
    }
    else
    {
        std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m" << " Not enough energy to attack! current energy: " << Energy_points << std::endl;
        return(0);
    }
}
void FragTrap::recovery_hp(int const hp)
{
    if(Hit_points + hp >= Max_hit_points)
    {
        std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m" << " Restored health " << Max_hit_points - Hit_points << ". Hit points is fuul!" << std::endl;
        Hit_points = Max_hit_points;
    }
    else
    {
        Hit_points += hp;
        std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m" << " Restored health " << hp << ". Hit points is "<< Hit_points << std::endl;
    }
}
void FragTrap::recovery_ep(int const ep)
{
    if(Energy_points + ep >= Max_energy_points)
    {
        std::cout << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m" << " Restored energy: \u001b[32m" << Max_energy_points - Energy_points << "\u001b[0m. Energy points is fuul!" << std::endl;
        Energy_points = Max_energy_points;
    }
    else
    {
        Energy_points += ep;
        std::cout  << "FR4G-TP \u001b[32m<" << Name << ">\u001b[0m" << " Restored energu: \u001b[32m" << ep << "\u001b[0m Energy points is "<< Energy_points << std::endl;
    }
}
