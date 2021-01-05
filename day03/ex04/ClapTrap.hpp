/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 15:16:51 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 11:19:50 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAPP_HPP
#define CLAPTRAPP_HPP

#include <iostream>
#include <unistd.h>

class ClapTrap{
protected:
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
	ClapTrap(std::string name);
	ClapTrap();
	ClapTrap(const ClapTrap & ptr);
	ClapTrap &operator = (const ClapTrap &ptr);	
	std::string get_name();
	std::string get_type();
	void takeDamage(unsigned int amount);
	void recovery_hp(int const hp);
	void recovery_ep(int const ep);
	int rangedAttack(std::string const & target);
	int meleeAttack(std::string const & target);
	~ClapTrap();
};
#endif