/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 10:32:58 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/04 17:25:47 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap miki("Miki");
	ScavTrap siri("Siri");
	miki.takeDamage(siri.meleeAttack(miki.get_name()));
	siri.takeDamage(miki.meleeAttack(siri.get_name()));
	siri.challengeNewcomer();
	siri.challengeNewcomer();
	siri.challengeNewcomer();
	siri.takeDamage(miki.vaulthunter_dot_exe(siri.get_name()));
	siri.takeDamage(miki.vaulthunter_dot_exe(siri.get_name()));
	siri.takeDamage(miki.vaulthunter_dot_exe(siri.get_name()));
	siri.takeDamage(miki.vaulthunter_dot_exe(siri.get_name()));
}

