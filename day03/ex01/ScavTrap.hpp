/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 10:41:59 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 12:57:02 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <unistd.h>

class ScavTrap{
private:
	int Hit_points;
	int Max_hit_points;
	int Energy_points;
	int Max_energy_points;
	int Level;
	std::string Name;
	std::string type;
	int Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;
public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(const ScavTrap & ptr);
	ScavTrap &operator = (const ScavTrap &ptr);
	std::string get_name();	
	int rangedAttack(std::string const & target);
	int meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void challengeNewcomer(void);
	void recovery_hp(int const hp);
	void recovery_ep(int const ep);
	~ScavTrap();
};

#endif