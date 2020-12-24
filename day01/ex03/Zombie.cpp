/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:01:04 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:42:23 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {};

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
}

void Zombie::announce()
{
	std::cout << _name << " " << _type << " " << "Braiiiiiiinnnssss..." << std::endl;
}