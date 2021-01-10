/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:00:55 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 18:33:07 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice() : AMateria("ice") {}
	Ice(Ice const &ptr);
	Ice &operator = (Ice const &ptr);
	void use(ICharacter& target);
	AMateria* clone() const;
	~Ice(){}
};


#endif