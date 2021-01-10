/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:06:43 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 19:47:01 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy{
public:
	RadScorpion();
	void takeDamage(int damage);
	RadScorpion(RadScorpion const &ptr);
	RadScorpion &operator = (RadScorpion const &ptr);
	virtual ~RadScorpion();
};

#endif