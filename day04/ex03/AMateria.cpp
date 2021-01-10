/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:41:32 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/10 17:51:53 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


	AMateria::AMateria(std::string const & type)
	{
		this->_type = type;
		this->_xp = 0;
	}
	AMateria::~AMateria() {}

	std::string const & AMateria::getType() const
	{
		return this->_type;
	}
	unsigned int AMateria::getXP() const
	{
		return this->_xp;
	}
	void AMateria::set_hp(int xp)
	{
		this->_xp = xp;
	}
	void AMateria::set_type(std::string type)
	{
		this->_type = type;
	}	
	void AMateria::use(ICharacter& target)
	{
		_xp += 10;
		target.getName();
	}
