/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:34:20 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 19:45:36 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARSET_HPP
#define CHARSET_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
private:
	std::string name;
	int AP;
	AWeapon *weapon;
	Character();
public:
	Character(std::string name);
	Character(Character const &ptr);
	Character &operator=(Character const &ptr);
	void recoverAP();
	std::string get_name() const;
	int get_ap() const;
	std::string get_name_weapon() const;
	AWeapon *get_weapon() const;
	void equip(AWeapon *ptr);
	void attack(Enemy *ptr);
	virtual ~Character() {}
};

std::ostream &operator<<(std::ostream &stream, const Character &ptr);


#endif