/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:46:51 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 17:13:54 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB();
	HumanB(std::string name);
	void setWeapon(Weapon& weapon);
	void attack();
	~HumanB();
};

#endif