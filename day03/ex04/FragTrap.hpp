/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 19:01:19 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/05 10:43:05 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap & ptr);
	FragTrap &operator = (const FragTrap &ptr);
	int vaulthunter_dot_exe(std::string const & target);
	void set_hp();
	void set_max_hp();
	void set_ep();
	void set_max_ep();
	void set_lvl();
	void set_melee_atack();
	void set_ranged_atack();
	void set_amor();
	void set_type();
	~FragTrap();
};

#endif