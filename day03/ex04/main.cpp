/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 00:48:57 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 12:35:49 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap sp("Super");
	FragTrap fp("Ruck");
	sp.rangedAttack("Norma");
	sp.meleeAttack("Mulinet");
	sp.vaulthunter_dot_exe("Intra Subjekt");
	sp.ninjaShoebox(fp);
}