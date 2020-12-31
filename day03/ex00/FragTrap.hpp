/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 19:01:19 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/31 19:04:21 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <unistd.h>

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

	FragTrap(std::string name);
	std::string get_name();
	int rangedAttack(std::string const & target);
	int meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	int vaulthunter_dot_exe(std::string const & target);
	void recovery_hp(int const hp);
	void recovery_ep(int const ep);
	~FragTrap();
};

#endif