/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:45:53 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 16:45:56 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::HumanA(std::string name, Weapon& weapon)
{
	_weapon = &weapon;
	_name = name;
}
void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

HumanA::~HumanA() {}