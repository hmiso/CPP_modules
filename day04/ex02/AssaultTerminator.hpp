/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:18:44 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/09 22:21:52 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_HPP
#define ASSAULT_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine{
private:
	std::string type;
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &ptr);
	AssaultTerminator &operator = (AssaultTerminator const &ptr);
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	ISpaceMarine* clone() const;
	~AssaultTerminator();
};


#endif