/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:38:38 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/11 17:29:34 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
class ICharacter;
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
	unsigned int _xp;
	std::string _type;
	AMateria();
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	void set_hp(int xp);
	void set_type(std::string type);
};

#endif