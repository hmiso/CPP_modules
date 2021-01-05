/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:56:37 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/04 18:12:49 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HINJA_TRAP_HPP
#define HINJA_TRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap & ptr);
	NinjaTrap &operator = (const NinjaTrap &ptr);	
	void ninjaShoebox(FragTrap & name);
	void ninjaShoebox(ScavTrap & name);
	void ninjaShoebox(NinjaTrap & name);
	void ninjaShoebox(ClapTrap & name);
	~NinjaTrap();
};

#endif