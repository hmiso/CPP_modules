/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 19:06:38 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:31:45 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name, std::string type) 
{
	_name = name;
	_type = type;
}

Zombie::~Zombie()
{
	std::cout << _name << " " << _type << " " << "I die" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << " " << _type << " " << "Braiiiiiiinnnssss..." << std::endl;
}