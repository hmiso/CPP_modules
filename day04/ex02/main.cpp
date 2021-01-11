/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:09:58 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 15:58:43 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << std::endl << "MORE TESTING!!!" << std::endl;
	Squad	more;
	ISpaceMarine* david = new TacticalMarine;
	ISpaceMarine* peter = new AssaultTerminator;
	// if (more.push(david) || more.push(peter))
	// 	return (EXIT_FAILURE);
	more.push(david);
	more.push(peter);
	Squad	more2(more);
	Squad	more3;
	more3 = more2;
	Squad	othr;
	ISpaceMarine* kris = new AssaultTerminator;
	ISpaceMarine* mom = new TacticalMarine;
	// if (othr.push(kris) || othr.push(mom))
	// 	return (EXIT_FAILURE);
	othr.push(kris);
	othr.push(mom);
	more3 = othr;
	for (int i = 0; i < more3.getCount(); ++i) {
		ISpaceMarine* cur = more3.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}	
	return 0;
}