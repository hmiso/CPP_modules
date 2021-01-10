/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:51:49 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 10:56:12 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACKTICAL_HPP
#define TACKTICAL_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{
private:
	std::string type;
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &ptr);
	TacticalMarine &operator = (TacticalMarine const &ptr);
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	ISpaceMarine *clone() const;
	~TacticalMarine();
};


#endif