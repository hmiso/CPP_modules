/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:39:09 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 17:14:33 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanA();
	HumanA(std::string name, Weapon& weapon);
	void attack();
	~HumanA();
};

#endif