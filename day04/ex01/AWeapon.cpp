/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:26:51 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 19:32:54 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage){
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}
std::string AWeapon::getName() const{
	return name;
}
int AWeapon::getAPCost() const{
	return apcost;
}
int AWeapon::getDamage() const{
	return damage;
}
AWeapon::AWeapon(const AWeapon &ptr){
	*this = ptr;
}
AWeapon &AWeapon::operator= (AWeapon const &ptr)
{
	this->name = ptr.name;
	this->damage = ptr.damage;
	this->apcost = ptr.apcost; 
	return *this;
}