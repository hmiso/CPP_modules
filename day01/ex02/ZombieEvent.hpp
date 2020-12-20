/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 11:29:33 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 18:45:47 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVANT_HPP
#include "Zombie.hpp"

class ZombieEvent{
private:
	std::string type;
public:
	ZombieEvent();
	ZombieEvent(std::string type);
	~ZombieEvent();
	Zombie* newZombie(std::string name);
	void 	setZombieType(Zombie& ptr, std::string type);
	Zombie*	randomChump();
};

#endif