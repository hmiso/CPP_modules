/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:49:23 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 21:05:53 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"

void PowerFist::attack()
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator = (PowerFist const &ptr)
{
	this->name = ptr.name;
	this->apcost = ptr.apcost;
	this->damage =ptr.damage;
	return *this;
}
