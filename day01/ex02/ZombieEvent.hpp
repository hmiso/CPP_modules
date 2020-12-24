/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 11:29:33 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 17:18:39 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVANT_HPP
#define ZOMBIEEVANT_HPP
#include "Zombie.hpp"

class ZombieEvent{
private:
	std::string _type;
public:
	ZombieEvent();
	void setZombieType(std::string type);
 	Zombie* newZombie(std::string name);
	Zombie* randomChump();
	~ZombieEvent();
};

#endif