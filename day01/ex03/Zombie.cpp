/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:01:04 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 16:27:16 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << name << "(" << type << ")"<< ">" << "Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie()
{
	this->name = "";
	this->type = "";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->type = "";
}

void	Zombie::set_type(std::string type)
{
	this->type = type;
}

Zombie::~Zombie()
{
	std::cout << "<" << name << "(" << type << ")"<< ">" << "died again" << std::endl;
}