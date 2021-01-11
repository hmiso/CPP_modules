/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cow.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:33:19 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 13:36:45 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cow.hpp"

Cow::Cow(std::string name) : Victim(name){
	this->name = name;
	std::cout << "Muuu muuu..." << std::endl;
}
void Cow::getPolymorphed() const {
	std::cout << name << " has been turned into a litle cat!" << std::endl;
}		
Cow::~Cow(){
	std::cout << "What?!" << std::endl;
}
