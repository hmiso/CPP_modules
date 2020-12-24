/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 16:59:07 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 15:15:46 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(){ };

void Pony::pony_voice()
{
	std::cout << "Hi! My name is " << name << std::endl;
}

Pony::Pony(std::string name)
{
	this->name = name;
}

Pony::~Pony()
{
	std::cout << "I am pony - " << name << "." << "Goodbye!" << std::endl;
}