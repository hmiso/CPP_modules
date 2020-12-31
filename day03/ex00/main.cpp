/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:54:55 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/30 12:49:36 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class FragTrap{
private:
	int Hit_points;
	int Max_hit_points;
	int Energy_points;
	int Max_energy_points;
	int Level;
	std::string Name;
	int Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;
public:
	FragTrap(std::string name){
		std::cout << "Phhh.. <" << name << "> "
		<< "I want to see your blood, Bone leather bag!" << std::endl;
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
	void rangedAttack(std::string const & target){
	std::cout << "FR4G-TP <" << Name << "> attacks <" << target << "> at range, causing <"
	<< Ranged_attack_damage << "> points of damage!" << std::endl;
	};
	void meleeAttack(std::string const & target){
	std::cout << "FR4G-TP <" << Name << "> attacks <" << target << "> at melee, causing <"
	<< Ranged_attack_damage << "> points of damage!" << std::endl;
	};
	void takeDamage(unsigned int amount){
		if (Hit_points - (amount - Armor_damage_reduction) <= 0)
		{
			Hit_points = 0;
			std::cout << "FR4G-TP <" << Name << "> take damage " << amount - Armor_damage_reduction <<
			"Hit points: " << Hit_points << std::endl;
			~FragTrap();
		}
		else
		{
			Hit_points = Hit_points - (amount - Armor_damage_reduction);
			std::cout << "FR4G-TP <" << Name << "> take damage " << amount - Armor_damage_reduction <<
			"Hit points: " << Hit_points << std::endl;
		}
	};
	void vaulthunter_dot_exe(std::string const & target){
		std::string attack_options[5];
		attack_options[0] = "attacks with a raw spiked club";
		attack_options[1] = "attacks with a large raw spiked club";
		attack_options[2] = "inflicts psychological trauma on you with an intro subject";
		attack_options[3] = "hacks the account and buys the tiz";
		attack_options[4] = "make @chanel from your slack to adm";
		if (Energy_points - 25 >= 0)
		{
			
		}
	}	
	~FragTrap(){
		std::cout << "FR4G-TP <" << Name << "> Windows blue screen of death..." << std::endl;
	};
};
