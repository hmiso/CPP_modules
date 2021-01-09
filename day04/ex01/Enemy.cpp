/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:05:10 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 20:10:37 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"


Enemy::Enemy(int hp, std::string type){
	this->hp = hp;
	this->type = type;
}

std::string Enemy::getType() const{
	return type;
}

int Enemy::getHP() const{
	return hp;
}

void Enemy::setHP(int hp) {
	this->hp = hp;
}

void Enemy::takeDamage(int damage){
	if (damage > 0)
		hp = hp - damage;
}

Enemy::Enemy(Enemy const &ptr){
	*this = ptr;
}

Enemy &Enemy::operator = (Enemy const &ptr){
	this->type = ptr.type;
	this->hp = ptr.hp;
	return *this;
}