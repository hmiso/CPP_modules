/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:27:11 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 11:38:36 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap{
public:	
	SuperTrap(std::string name);
	SuperTrap();
	~SuperTrap();
	void rangedAttack(std::string const & target);
	int meleeAttack(std::string const & target);
	SuperTrap(const SuperTrap & ptr);
	SuperTrap &operator = (const SuperTrap &ptr);	
};