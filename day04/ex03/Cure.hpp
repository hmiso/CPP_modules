/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:32:50 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 18:32:56 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure() : AMateria("cure") {}
	Cure(Cure const &ptr);
	Cure &operator = (Cure const &ptr);
	void use(ICharacter& target);
	AMateria* clone() const;
	~Cure(){}
};


#endif