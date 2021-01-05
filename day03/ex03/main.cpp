/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:00:41 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 10:18:26 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp" 
#include "NinjaTrap.hpp"

int main()
{
	NinjaTrap ninja("Skif");
	FragTrap Ruck("Ruck");
	ScavTrap siri("Siri");
	ClapTrap parent;
	ninja.ninjaShoebox(Ruck);
	ninja.ninjaShoebox(siri);
	Ruck.takeDamage(ninja.meleeAttack(Ruck.get_name()));
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(parent);
}