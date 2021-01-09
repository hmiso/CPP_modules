/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:51:55 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 16:53:48 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name){
	this->name = name;
	std::cout << "Zog zog." << std::endl;
}
void Peon::getPolymorphed() const {
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}		
Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}
