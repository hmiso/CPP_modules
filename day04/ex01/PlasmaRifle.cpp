/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:14:25 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 21:05:37 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

void PlasmaRifle::attack()
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator = (PlasmaRifle const &ptr)
{
	this->name = ptr.name;
	this->apcost = ptr.apcost;
	this->damage =ptr.damage;
	return *this;
}