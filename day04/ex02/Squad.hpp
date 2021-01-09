/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:35:18 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 22:47:47 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad{
private:
	int count;
	ISpaceMarine **squad;
public:
	Squad();
	Squad(Squad const &ptr);
	Squad &operator = (Squad const &ptr);
	int getCount() const;
	ISpaceMarine *getUnit(int i) const;
	int push(ISpaceMarine *ptr);
	~Squad();
};

#endif