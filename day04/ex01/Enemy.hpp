/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:01:33 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 21:53:49 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy{
protected:
	int hp;
	std::string type;
public:
	Enemy(int hp, std::string type);
	std::string virtual getType() const;
	int getHP() const;
	void setHP(int hp);
	virtual ~Enemy() {}
	virtual void takeDamage(int damage);
	Enemy(Enemy const &ptr);
	Enemy &operator = (Enemy const &ptr);
};

#endif