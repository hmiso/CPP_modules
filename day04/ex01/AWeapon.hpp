/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:27:13 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 22:01:20 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon{
protected:
	std::string name;
	int damage;
	int apcost;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	AWeapon(const AWeapon &ptr);
	AWeapon &operator= (AWeapon const &ptr);
	virtual void attack() = 0;
	virtual ~AWeapon(){} 
};

#endif