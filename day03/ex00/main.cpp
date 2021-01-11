/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 10:54:55 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 12:48:40 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap miki("Miki");
	FragTrap ruck("Ruck");
	ruck.takeDamage(miki.rangedAttack(ruck.get_name()));
	ruck.takeDamage(miki.meleeAttack(ruck.get_name()));
	ruck.takeDamage(miki.vaulthunter_dot_exe(ruck.get_name()));
	miki.recovery_ep(10);
	ruck.recovery_hp(10);
	ruck.recovery_hp(200);
	ruck.takeDamage(miki.vaulthunter_dot_exe(ruck.get_name()));
	ruck.takeDamage(miki.vaulthunter_dot_exe(ruck.get_name()));
	ruck.takeDamage(miki.vaulthunter_dot_exe(ruck.get_name()));
	ruck.takeDamage(miki.vaulthunter_dot_exe(ruck.get_name()));
	ruck.takeDamage(miki.vaulthunter_dot_exe(ruck.get_name()));
	ruck.takeDamage(miki.vaulthunter_dot_exe(ruck.get_name()));
	ruck.takeDamage(miki.meleeAttack(ruck.get_name()));
	ruck.takeDamage(miki.meleeAttack(ruck.get_name()));
	ruck.takeDamage(miki.meleeAttack(ruck.get_name()));

}