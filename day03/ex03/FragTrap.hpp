/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 19:01:19 by hmiso             #+#    #+#             */
/*   Updated: 2021/01/04 17:29:27 by hmiso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap & ptr);
	FragTrap &operator = (const FragTrap &ptr);
	int vaulthunter_dot_exe(std::string const & target);
	~FragTrap();
};

#endif