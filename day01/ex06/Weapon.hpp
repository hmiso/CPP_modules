/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:27:37 by hmiso             #+#    #+#             */
/*   Updated: 2020/12/22 17:14:18 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	std::string& getType();
	void	setType(std::string type);
	~Weapon();
};

#endif