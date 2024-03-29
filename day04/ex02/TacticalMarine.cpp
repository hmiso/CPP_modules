/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:53:02 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 22:21:16 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
	type = "TacticalMarine";
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &ptr)
{
	*this = ptr;
}

TacticalMarine &TacticalMarine:: operator=(TacticalMarine const &ptr)
{
	this->type = ptr.type;
	return *this;
}

void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
ISpaceMarine* TacticalMarine::clone() const {
	TacticalMarine *ptr = new TacticalMarine(*this);
	return ptr;
}
TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh..." << std::endl;
}
