/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:02:23 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 17:30:00 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter{
private:
	std::string name;
	AMateria *slots[4];
	int count_clots;
	Character();
public:
	Character(std::string name);
	Character(Character const &ptr);
	Character &operator = (Character const &ptr);
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	~Character();
};

#endif