/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:57:07 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 21:57:59 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy{
public:
	SuperMutant();
	~SuperMutant();
	void takeDamage(int damage);
	SuperMutant(SuperMutant const &ptr);
	SuperMutant &operator = (SuperMutant const &ptr);
};

#endif