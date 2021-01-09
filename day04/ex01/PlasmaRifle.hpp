/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:10:47 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 22:02:02 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
public:
	PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){};
	void attack();
	PlasmaRifle &operator = (PlasmaRifle const &ptr);
	PlasmaRifle(PlasmaRifle const &ptr) : AWeapon(ptr) {}
};

#endif