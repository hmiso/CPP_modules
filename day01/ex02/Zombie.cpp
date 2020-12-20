/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 19:06:38 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 18:40:55 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << name << "(" << type << ")"<< ">" << "Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::set_type(std::string type)
{
	this->type = type;
}

Zombie::Zombie()
{
	this->name = "";
	this->type = "";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}


Zombie::~Zombie()
{
	std::cout << "<" << name << "(" << type << ")"<< ">" << "died again" << std::endl;
}