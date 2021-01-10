/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:49:28 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 19:44:36 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
public:
	PowerFist() : AWeapon("Power Fist", 8, 50){}
	void attack();
	PowerFist &operator = (PowerFist const &ptr);
	PowerFist(PowerFist const &ptr) : AWeapon(ptr) {}
	virtual ~PowerFist() {}
};

#endif