/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 10:41:59 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/04 17:20:19 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <unistd.h>

class ScavTrap : public ScavTrap{

public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(const ScavTrap & ptr);
	ScavTrap &operator = (const ScavTrap &ptr);	
	int rangedAttack(std::string const & target);
	int meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void challengeNewcomer(void);
	void recovery_hp(int const hp);
	void recovery_ep(int const ep);
	~ScavTrap();
};

#endif