/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:06:01 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/20 18:06:02 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde{
private:
	Zombie *horde;
public:
	ZombieHorde(int i);
	~ZombieHorde();
	void announce();
	// void set_name(Zombie& ptr, std::string name);
};