/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 10:41:59 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/04 17:22:45 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(const ScavTrap & ptr);
	ScavTrap &operator = (const ScavTrap &ptr);	
	void challengeNewcomer(void);
	~ScavTrap();
};

#endif